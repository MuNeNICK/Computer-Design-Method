#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>
#include <sys/mman.h>

#define CACHE_LINE_SIZE 64
#define NLOOP (4UL*1024*1024*1024)
#define NSECS_PER_SEC (1000UL*1000*1000)

static uint64_t diff_nsec(struct timespec start, struct timespec end) {
    uint64_t start_nsec, end_nsec;
    start_nsec = start.tv_sec*NSECS_PER_SEC + start.tv_nsec;
    end_nsec = end.tv_sec*NSECS_PER_SEC + end.tv_nsec;
    return end_nsec - start_nsec;
}

int main(int argc, char *argv[]) {
    char *com = argv[0];
    int size;
    register int byte_size;
    char *buffer;
    struct timespec start, end;
    int i, j;

    // コマンドライン引数チェック
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <size[KB]>\n", com);
        exit(EXIT_FAILURE);
    }

    // 引数のサイズ(KB)をbyte単位に変換
    size = atoi(argv[1]);
    byte_size = size*1024;
    if (byte_size <= 0) {
        fprintf(stderr, "size: %d[KB] should be >= 1\n", size);
        exit(EXIT_FAILURE);
    }

    // 引数サイズ分のメモリ空間を確保
    buffer = mmap(NULL, byte_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (buffer == MAP_FAILED) {
        perror("mmap() Failed");
        exit(EXIT_FAILURE);
    }
    
    // 処理時間計測開始
    clock_gettime(CLOCK_MONOTONIC, &start);
    for (i = 0; i < NLOOP/(byte_size/CACHE_LINE_SIZE); i++) {
        for (j = 0; j < byte_size; j += CACHE_LINE_SIZE) {
            buffer[j] = 0;
        }
    }

    // 処理時間計測終了
    clock_gettime(CLOCK_MONOTONIC, &end);
    // 処理時間をnsec単位で得る
    printf("%5d(KB): %f(nsec)\n", size, (double)diff_nsec(start, end)/NLOOP);
    
    return 0;
}

/* 実行方法
for i in 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768; do ./cache $i; done
*/

/* 
[m18136@s752-pc020 Computer-Design-Method-main]$ for i in 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768; do ./a.out $i; done
    4(KB): 1.514490(nsec)
    8(KB): 1.712801(nsec)
   16(KB): 1.712036(nsec)
   32(KB): 1.736800(nsec)
   64(KB): 1.590234(nsec)
  128(KB): 1.594737(nsec)
  256(KB): 1.627770(nsec)
  512(KB): 1.676433(nsec)
 1024(KB): 1.672512(nsec)
 2048(KB): 1.675302(nsec)
 4096(KB): 1.681790(nsec)
 8192(KB): 2.702374(nsec)
16384(KB): 4.474412(nsec)
32768(KB): 6.149544(nsec)
*/
