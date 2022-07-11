# 学校PCでのCPU詳細
## lscpuの結果
```shell=
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
```

## キャッシュ情報の詳細
```shell=
/sys/devices/system/cpu/cpu0/cache/index0/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu0/cache/index1/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu0/cache/index2/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu0/cache/index3/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index0/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index1/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index2/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index3/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index0/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index1/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index2/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index3/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index0/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index1/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index2/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index3/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index0/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index1/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index2/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index3/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index0/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index1/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index2/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index3/:
合計 0
drwxr-xr-x 2 root root    0  6月 27 09:30 .
drwxr-xr-x 6 root root    0  6月 27 09:30 ..
-r--r--r-- 1 root root 4096  6月 27 09:30 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 09:30 id
-r--r--r-- 1 root root 4096  6月 27 09:30 level
-r--r--r-- 1 root root 4096  6月 27 09:30 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 09:30 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 09:30 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 09:30 size
-r--r--r-- 1 root root 4096  6月 27 09:30 type
-r--r--r-- 1 root root 4096  6月 27 09:30 ways_of_associativity
```



# 自宅サーバでのCPU詳細
## lscpuの結果
```shell=
root@633a8438f08d:~/.local/share/code-server/User/Workspaces/Computer-Design-Method# lscpu
Architecture:            x86_64
  CPU op-mode(s):        32-bit, 64-bit
  Address sizes:         45 bits physical, 48 bits virtual
  Byte Order:            Little Endian
CPU(s):                  8
  On-line CPU(s) list:   0-7
Vendor ID:               GenuineIntel
  Model name:            Intel(R) Xeon(R) CPU D-1518 @ 2.20GHz
    CPU family:          6
    Model:               86
    Thread(s) per core:  1
    Core(s) per socket:  1
    Socket(s):           8
    Stepping:            3
    BogoMIPS:            4389.83
    Flags:               fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush mmx fxsr ss
                         e sse2 ss syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon nopl xtopology tsc_reliabl
                         e nonstop_tsc cpuid pni pclmulqdq ssse3 fma cx16 pcid sse4_1 sse4_2 x2apic movbe popcnt tsc
                         _deadline_timer aes xsave avx f16c rdrand hypervisor lahf_lm abm 3dnowprefetch cpuid_fault 
                         invpcid_single pti ssbd ibrs ibpb stibp fsgsbase tsc_adjust bmi1 avx2 smep bmi2 invpcid rds
                         eed adx smap xsaveopt arat md_clear flush_l1d arch_capabilities
Virtualization features: 
  Hypervisor vendor:     VMware
  Virtualization type:   full
Caches (sum of all):     
  L1d:                   256 KiB (8 instances)
  L1i:                   256 KiB (8 instances)
  L2:                    2 MiB (8 instances)
  L3:                    48 MiB (8 instances)
NUMA:                    
  NUMA node(s):          1
  NUMA node0 CPU(s):     0-7
Vulnerabilities:         
  Itlb multihit:         KVM: Mitigation: VMX unsupported
  L1tf:                  Mitigation; PTE Inversion
  Mds:                   Mitigation; Clear CPU buffers; SMT Host state unknown
  Meltdown:              Mitigation; PTI
  Spec store bypass:     Mitigation; Speculative Store Bypass disabled via prctl and seccomp
  Spectre v1:            Mitigation; usercopy/swapgs barriers and __user pointer sanitization
  Spectre v2:            Mitigation; Full generic retpoline, IBPB conditional, IBRS_FW, STIBP disabled, RSB filling
  Srbds:                 Not affected
  Tsx async abort:       Not affected
```

## キャッシュの詳細
```shell=
/sys/devices/system/cpu/cpu0/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu0/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu0/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu0/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu1/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu2/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu3/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu4/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu5/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu6/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu6/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu6/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu6/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu7/cache/index0/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu7/cache/index1/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu7/cache/index2/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity

/sys/devices/system/cpu/cpu7/cache/index3/:
total 0
drwxr-xr-x 2 root root    0  6月 27 00:23 .
drwxr-xr-x 6 root root    0  6月 27 00:23 ..
-r--r--r-- 1 root root 4096  6月 27 00:23 coherency_line_size
-r--r--r-- 1 root root 4096  6月 27 00:23 id
-r--r--r-- 1 root root 4096  6月 27 00:23 level
-r--r--r-- 1 root root 4096  6月 27 00:23 number_of_sets
-r--r--r-- 1 root root 4096  6月 27 00:23 physical_line_partition
-r--r--r-- 1 root root 4096  6月 27 00:24 shared_cpu_list
-r--r--r-- 1 root root 4096  6月 27 00:23 shared_cpu_map
-r--r--r-- 1 root root 4096  6月 27 00:23 size
-r--r--r-- 1 root root 4096  6月 27 00:23 type
-rw-r--r-- 1 root root 4096  6月 27 00:24 uevent
-r--r--r-- 1 root root 4096  6月 27 00:23 ways_of_associativity
```

