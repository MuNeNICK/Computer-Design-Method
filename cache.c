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

/* 学校PC(Intel Core i5-9500)での実行結果
[m18136@s752-pc020 ~]$ lscpu
アーキテクチャ: x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                6
On-line CPU(s) list:   0-5
コアあたりのスレッド数:1
ソケットあたりのコア数:6
Socket(s):             1
NUMAノード:         1
ベンダーID:        GenuineIntel
CPUファミリー:    6
モデル:             158
Model name:            Intel(R) Core(TM) i5-9500 CPU @ 3.00GHz
ステッピング:    10
CPU MHz:               1012.390
CPU max MHz:           4400.0000
CPU min MHz:           800.0000
BogoMIPS:              6000.00
仮想化:             VT-x
L1d キャッシュ:   32K
L1i キャッシュ:   32K
L2 キャッシュ:    256K
L3 キャッシュ:    9216K
NUMAノード 0 CPU:   0-5
Flags:                 fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc art arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc aperfmperf eagerfpu pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 sdbg fma cx16 xtpr pdcm pcid sse4_1 sse4_2 x2apic movbe popcnt tsc_deadline_timer aes xsave avx f16c rdrand lahf_lm abm 3dnowprefetch epb invpcid_single intel_pt ssbd ibrs ibpb stibp tpr_shadow vnmi flexpriority ept vpid fsgsbase tsc_adjust bmi1 hle avx2 smep bmi2 erms invpcid rtm mpx rdseed adx smap clflushopt xsaveopt xsavec xgetbv1 dtherm ida arat pln pts hwp hwp_notify hwp_act_window hwp_epp md_clear spec_ctrl intel_stibp flush_l1d


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

/* 自宅サーバ(Intel Xeon D-1815)での実行結果
root@633a8438f08d:~/.local/share/code-server/User/Workspaces/Computer-Design-Method# for i in 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768; do ./cache $i; done
    4(KB): 7.163805(nsec)
    8(KB): 7.040236(nsec)
   16(KB): 7.079857(nsec)
   32(KB): 7.131404(nsec)
   64(KB): 9.742482(nsec)
  128(KB): 9.749422(nsec)
  256(KB): 9.934251(nsec)
  512(KB): 10.111465(nsec)
 1024(KB): 10.317137(nsec)
 2048(KB): 10.459252(nsec)
 4096(KB): 11.117789(nsec)
 8192(KB): 13.327267(nsec)
16384(KB): 13.605267(nsec)
32768(KB): 13.243783(nsec)
*/
