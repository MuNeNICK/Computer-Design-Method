#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define NSECS_PER_SEC (1000UL*1000*1000)
#define MAX_ROW (512UL)
#define MAX_COLUMN (32UL*1024)

unsigned char Matrix[MAX_ROW][MAX_COLUMN];

static uint64_t diff_nsec(struct timespec start, struct timespec end) {
    uint64_t start_nsec, end_nsec;
    start_nsec = start.tv_sec*NSECS_PER_SEC + start.tv_nsec;
    end_nsec = end.tv_sec*NSECS_PER_SEC + end.tv_nsec;
    return end_nsec - start_nsec;
}

int main(int argc, char *argv[]) {
    char *com = argv[0];
    int loop_count;
    struct timespec start, end;
    int n, i, j;
    // コマンドライン引数チェック
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <loop_count>\n", com);
        exit(EXIT_FAILURE);
    }

    // ループの繰り返し回数を取得
    loop_count = atoi(argv[1]);
    if (loop_count <= 0) {
        fprintf(stderr, "loop_count: %d should be >= 1\n", loop_count);
        exit(EXIT_FAILURE);
    }

    // 使用行列全体を 0 で埋める
    memset(Matrix, 0, sizeof (Matrix));

    // 処理時間計測開始
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Matrix に対する書き込み処理
    // XXX: ここの３重ループの順番を検討する

    // n→i→j
    for (n = 1; n <= loop_count; n++) {
        for (i = 0; i < MAX_ROW; i++) {
            for (j = 0; j < MAX_COLUMN; j++) {
                Matrix[i][j]++;
            }
        }
    }

    // n→j→i
    for (n = 1; n <= loop_count; n++) {
        for (j = 0; j < MAX_COLUMN; j++) {
            for (i = 0; i < MAX_ROW; i++) {
                Matrix[i][j]++;
            }
        }
    }

    // i→j→n
    for (i = 0; i < MAX_ROW; i++) {
        for (j = 0; j < MAX_COLUMN; j++) {
            for (n = 1; n <= loop_count; n++) {
                Matrix[i][j]++;
            }
        }
    }

    // j→i→n
    for (j = 0; j < MAX_COLUMN; j++) {
        for (i = 0; i < MAX_ROW; i++) {
            for (n = 1; n <= loop_count; n++) {
                Matrix[i][j]++;
            }
        }
    }

    // 処理時間計測終了
    clock_gettime(CLOCK_MONOTONIC, &end);

    // 処理時間をnsec単位で得る
    printf("N = %d: %9f(nsec)\n", loop_count, (double)diff_nsec(start, end)/(loop_count*MAX_ROW*MAX_COLUMN));
    
    return 0;
}

/* n→i→j
root@e6743b3c62bb:/workspace/Computer-Design-Method# ./binaries/array 100
N = 100:  8.411755(nsec)
*/

/* n→j→i
root@867e318c8197:/workspace/Computer-Design-Method# ./binaries/array2 100
N = 100: 24.404816(nsec)
*/

/* i→j→n
root@867e318c8197:/workspace/Computer-Design-Method# ./binaries/array3 100
N = 100: 15.391083(nsec)
*/

/* j→i→n
root@867e318c8197:/workspace/Computer-Design-Method# ./binaries/array4 100
N = 100:  6.794386(nsec)
*/