// /*AFLA*/ #ifndef _ASM_X86_UNISTD_32_IA32_H
// /*AFLA*/ #define _ASM_X86_UNISTD_32_IA32_H 1
// /*AFLA*/ 
// /*AFLA*/ #define __NR_ia32_restart_syscall 0
// /*AFLA*/ #define __NR_ia32_exit 1
// /*AFLA*/ #define __NR_ia32_fork 2
// /*AFLA*/ #define __NR_ia32_read 3
// /*AFLA*/ #define __NR_ia32_write 4
// /*AFLA*/ #define __NR_ia32_open 5
// /*AFLA*/ #define __NR_ia32_close 6
// /*AFLA*/ #define __NR_ia32_waitpid 7
// /*AFLA*/ #define __NR_ia32_creat 8
// /*AFLA*/ #define __NR_ia32_link 9
// /*AFLA*/ #define __NR_ia32_unlink 10
// /*AFLA*/ #define __NR_ia32_execve 11
// /*AFLA*/ #define __NR_ia32_chdir 12
// /*AFLA*/ #define __NR_ia32_time 13
// /*AFLA*/ #define __NR_ia32_mknod 14
// /*AFLA*/ #define __NR_ia32_chmod 15
// /*AFLA*/ #define __NR_ia32_lchown 16
// /*AFLA*/ #define __NR_ia32_break 17
// /*AFLA*/ #define __NR_ia32_oldstat 18
// /*AFLA*/ #define __NR_ia32_lseek 19
// /*AFLA*/ #define __NR_ia32_getpid 20
// /*AFLA*/ #define __NR_ia32_mount 21
// /*AFLA*/ #define __NR_ia32_umount 22
// /*AFLA*/ #define __NR_ia32_setuid 23
// /*AFLA*/ #define __NR_ia32_getuid 24
// /*AFLA*/ #define __NR_ia32_stime 25
// /*AFLA*/ #define __NR_ia32_ptrace 26
// /*AFLA*/ #define __NR_ia32_alarm 27
// /*AFLA*/ #define __NR_ia32_oldfstat 28
// /*AFLA*/ #define __NR_ia32_pause 29
// /*AFLA*/ #define __NR_ia32_utime 30
// /*AFLA*/ #define __NR_ia32_stty 31
// /*AFLA*/ #define __NR_ia32_gtty 32
// /*AFLA*/ #define __NR_ia32_access 33
// /*AFLA*/ #define __NR_ia32_nice 34
// /*AFLA*/ #define __NR_ia32_ftime 35
// /*AFLA*/ #define __NR_ia32_sync 36
// /*AFLA*/ #define __NR_ia32_kill 37
// /*AFLA*/ #define __NR_ia32_rename 38
// /*AFLA*/ #define __NR_ia32_mkdir 39
// /*AFLA*/ #define __NR_ia32_rmdir 40
// /*AFLA*/ #define __NR_ia32_dup 41
// /*AFLA*/ #define __NR_ia32_pipe 42
// /*AFLA*/ #define __NR_ia32_times 43
// /*AFLA*/ #define __NR_ia32_prof 44
// /*AFLA*/ #define __NR_ia32_brk 45
// /*AFLA*/ #define __NR_ia32_setgid 46
// /*AFLA*/ #define __NR_ia32_getgid 47
// /*AFLA*/ #define __NR_ia32_signal 48
// /*AFLA*/ #define __NR_ia32_geteuid 49
// /*AFLA*/ #define __NR_ia32_getegid 50
// /*AFLA*/ #define __NR_ia32_acct 51
// /*AFLA*/ #define __NR_ia32_umount2 52
// /*AFLA*/ #define __NR_ia32_lock 53
// /*AFLA*/ #define __NR_ia32_ioctl 54
// /*AFLA*/ #define __NR_ia32_fcntl 55
// /*AFLA*/ #define __NR_ia32_mpx 56
// /*AFLA*/ #define __NR_ia32_setpgid 57
// /*AFLA*/ #define __NR_ia32_ulimit 58
// /*AFLA*/ #define __NR_ia32_oldolduname 59
// /*AFLA*/ #define __NR_ia32_umask 60
// /*AFLA*/ #define __NR_ia32_chroot 61
// /*AFLA*/ #define __NR_ia32_ustat 62
// /*AFLA*/ #define __NR_ia32_dup2 63
// /*AFLA*/ #define __NR_ia32_getppid 64
// /*AFLA*/ #define __NR_ia32_getpgrp 65
// /*AFLA*/ #define __NR_ia32_setsid 66
// /*AFLA*/ #define __NR_ia32_sigaction 67
// /*AFLA*/ #define __NR_ia32_sgetmask 68
// /*AFLA*/ #define __NR_ia32_ssetmask 69
// /*AFLA*/ #define __NR_ia32_setreuid 70
// /*AFLA*/ #define __NR_ia32_setregid 71
// /*AFLA*/ #define __NR_ia32_sigsuspend 72
// /*AFLA*/ #define __NR_ia32_sigpending 73
// /*AFLA*/ #define __NR_ia32_sethostname 74
// /*AFLA*/ #define __NR_ia32_setrlimit 75
// /*AFLA*/ #define __NR_ia32_getrlimit 76
// /*AFLA*/ #define __NR_ia32_getrusage 77
// /*AFLA*/ #define __NR_ia32_gettimeofday 78
// /*AFLA*/ #define __NR_ia32_settimeofday 79
// /*AFLA*/ #define __NR_ia32_getgroups 80
// /*AFLA*/ #define __NR_ia32_setgroups 81
// /*AFLA*/ #define __NR_ia32_select 82
// /*AFLA*/ #define __NR_ia32_symlink 83
// /*AFLA*/ #define __NR_ia32_oldlstat 84
// /*AFLA*/ #define __NR_ia32_readlink 85
// /*AFLA*/ #define __NR_ia32_uselib 86
// /*AFLA*/ #define __NR_ia32_swapon 87
// /*AFLA*/ #define __NR_ia32_reboot 88
// /*AFLA*/ #define __NR_ia32_readdir 89
// /*AFLA*/ #define __NR_ia32_mmap 90
// /*AFLA*/ #define __NR_ia32_munmap 91
// /*AFLA*/ #define __NR_ia32_truncate 92
// /*AFLA*/ #define __NR_ia32_ftruncate 93
// /*AFLA*/ #define __NR_ia32_fchmod 94
// /*AFLA*/ #define __NR_ia32_fchown 95
// /*AFLA*/ #define __NR_ia32_getpriority 96
// /*AFLA*/ #define __NR_ia32_setpriority 97
// /*AFLA*/ #define __NR_ia32_profil 98
// /*AFLA*/ #define __NR_ia32_statfs 99
// /*AFLA*/ #define __NR_ia32_fstatfs 100
// /*AFLA*/ #define __NR_ia32_ioperm 101
// /*AFLA*/ #define __NR_ia32_socketcall 102
// /*AFLA*/ #define __NR_ia32_syslog 103
// /*AFLA*/ #define __NR_ia32_setitimer 104
// /*AFLA*/ #define __NR_ia32_getitimer 105
// /*AFLA*/ #define __NR_ia32_stat 106
// /*AFLA*/ #define __NR_ia32_lstat 107
// /*AFLA*/ #define __NR_ia32_fstat 108
// /*AFLA*/ #define __NR_ia32_olduname 109
// /*AFLA*/ #define __NR_ia32_iopl 110
// /*AFLA*/ #define __NR_ia32_vhangup 111
// /*AFLA*/ #define __NR_ia32_idle 112
// /*AFLA*/ #define __NR_ia32_vm86old 113
// /*AFLA*/ #define __NR_ia32_wait4 114
// /*AFLA*/ #define __NR_ia32_swapoff 115
// /*AFLA*/ #define __NR_ia32_sysinfo 116
// /*AFLA*/ #define __NR_ia32_ipc 117
// /*AFLA*/ #define __NR_ia32_fsync 118
// /*AFLA*/ #define __NR_ia32_sigreturn 119
// /*AFLA*/ #define __NR_ia32_clone 120
// /*AFLA*/ #define __NR_ia32_setdomainname 121
// /*AFLA*/ #define __NR_ia32_uname 122
// /*AFLA*/ #define __NR_ia32_modify_ldt 123
// /*AFLA*/ #define __NR_ia32_adjtimex 124
// /*AFLA*/ #define __NR_ia32_mprotect 125
// /*AFLA*/ #define __NR_ia32_sigprocmask 126
// /*AFLA*/ #define __NR_ia32_create_module 127
// /*AFLA*/ #define __NR_ia32_init_module 128
// /*AFLA*/ #define __NR_ia32_delete_module 129
// /*AFLA*/ #define __NR_ia32_get_kernel_syms 130
// /*AFLA*/ #define __NR_ia32_quotactl 131
// /*AFLA*/ #define __NR_ia32_getpgid 132
// /*AFLA*/ #define __NR_ia32_fchdir 133
// /*AFLA*/ #define __NR_ia32_bdflush 134
// /*AFLA*/ #define __NR_ia32_sysfs 135
// /*AFLA*/ #define __NR_ia32_personality 136
// /*AFLA*/ #define __NR_ia32_afs_syscall 137
// /*AFLA*/ #define __NR_ia32_setfsuid 138
// /*AFLA*/ #define __NR_ia32_setfsgid 139
// /*AFLA*/ #define __NR_ia32__llseek 140
// /*AFLA*/ #define __NR_ia32_getdents 141
// /*AFLA*/ #define __NR_ia32__newselect 142
// /*AFLA*/ #define __NR_ia32_flock 143
// /*AFLA*/ #define __NR_ia32_msync 144
// /*AFLA*/ #define __NR_ia32_readv 145
// /*AFLA*/ #define __NR_ia32_writev 146
// /*AFLA*/ #define __NR_ia32_getsid 147
// /*AFLA*/ #define __NR_ia32_fdatasync 148
// /*AFLA*/ #define __NR_ia32__sysctl 149
// /*AFLA*/ #define __NR_ia32_mlock 150
// /*AFLA*/ #define __NR_ia32_munlock 151
// /*AFLA*/ #define __NR_ia32_mlockall 152
// /*AFLA*/ #define __NR_ia32_munlockall 153
// /*AFLA*/ #define __NR_ia32_sched_setparam 154
// /*AFLA*/ #define __NR_ia32_sched_getparam 155
// /*AFLA*/ #define __NR_ia32_sched_setscheduler 156
// /*AFLA*/ #define __NR_ia32_sched_getscheduler 157
// /*AFLA*/ #define __NR_ia32_sched_yield 158
// /*AFLA*/ #define __NR_ia32_sched_get_priority_max 159
// /*AFLA*/ #define __NR_ia32_sched_get_priority_min 160
// /*AFLA*/ #define __NR_ia32_sched_rr_get_interval 161
// /*AFLA*/ #define __NR_ia32_nanosleep 162
// /*AFLA*/ #define __NR_ia32_mremap 163
// /*AFLA*/ #define __NR_ia32_setresuid 164
// /*AFLA*/ #define __NR_ia32_getresuid 165
// /*AFLA*/ #define __NR_ia32_vm86 166
// /*AFLA*/ #define __NR_ia32_query_module 167
// /*AFLA*/ #define __NR_ia32_poll 168
// /*AFLA*/ #define __NR_ia32_nfsservctl 169
// /*AFLA*/ #define __NR_ia32_setresgid 170
// /*AFLA*/ #define __NR_ia32_getresgid 171
// /*AFLA*/ #define __NR_ia32_prctl 172
// /*AFLA*/ #define __NR_ia32_rt_sigreturn 173
// /*AFLA*/ #define __NR_ia32_rt_sigaction 174
// /*AFLA*/ #define __NR_ia32_rt_sigprocmask 175
// /*AFLA*/ #define __NR_ia32_rt_sigpending 176
// /*AFLA*/ #define __NR_ia32_rt_sigtimedwait 177
// /*AFLA*/ #define __NR_ia32_rt_sigqueueinfo 178
// /*AFLA*/ #define __NR_ia32_rt_sigsuspend 179
// /*AFLA*/ #define __NR_ia32_pread64 180
// /*AFLA*/ #define __NR_ia32_pwrite64 181
// /*AFLA*/ #define __NR_ia32_chown 182
// /*AFLA*/ #define __NR_ia32_getcwd 183
// /*AFLA*/ #define __NR_ia32_capget 184
// /*AFLA*/ #define __NR_ia32_capset 185
// /*AFLA*/ #define __NR_ia32_sigaltstack 186
// /*AFLA*/ #define __NR_ia32_sendfile 187
// /*AFLA*/ #define __NR_ia32_getpmsg 188
// /*AFLA*/ #define __NR_ia32_putpmsg 189
// /*AFLA*/ #define __NR_ia32_vfork 190
// /*AFLA*/ #define __NR_ia32_ugetrlimit 191
// /*AFLA*/ #define __NR_ia32_mmap2 192
// /*AFLA*/ #define __NR_ia32_truncate64 193
// /*AFLA*/ #define __NR_ia32_ftruncate64 194
// /*AFLA*/ #define __NR_ia32_stat64 195
// /*AFLA*/ #define __NR_ia32_lstat64 196
// /*AFLA*/ #define __NR_ia32_fstat64 197
// /*AFLA*/ #define __NR_ia32_lchown32 198
// /*AFLA*/ #define __NR_ia32_getuid32 199
// /*AFLA*/ #define __NR_ia32_getgid32 200
// /*AFLA*/ #define __NR_ia32_geteuid32 201
// /*AFLA*/ #define __NR_ia32_getegid32 202
// /*AFLA*/ #define __NR_ia32_setreuid32 203
// /*AFLA*/ #define __NR_ia32_setregid32 204
// /*AFLA*/ #define __NR_ia32_getgroups32 205
// /*AFLA*/ #define __NR_ia32_setgroups32 206
// /*AFLA*/ #define __NR_ia32_fchown32 207
// /*AFLA*/ #define __NR_ia32_setresuid32 208
// /*AFLA*/ #define __NR_ia32_getresuid32 209
// /*AFLA*/ #define __NR_ia32_setresgid32 210
// /*AFLA*/ #define __NR_ia32_getresgid32 211
// /*AFLA*/ #define __NR_ia32_chown32 212
// /*AFLA*/ #define __NR_ia32_setuid32 213
// /*AFLA*/ #define __NR_ia32_setgid32 214
// /*AFLA*/ #define __NR_ia32_setfsuid32 215
// /*AFLA*/ #define __NR_ia32_setfsgid32 216
// /*AFLA*/ #define __NR_ia32_pivot_root 217
// /*AFLA*/ #define __NR_ia32_mincore 218
// /*AFLA*/ #define __NR_ia32_madvise 219
// /*AFLA*/ #define __NR_ia32_getdents64 220
// /*AFLA*/ #define __NR_ia32_fcntl64 221
// /*AFLA*/ #define __NR_ia32_gettid 224
// /*AFLA*/ #define __NR_ia32_readahead 225
// /*AFLA*/ #define __NR_ia32_setxattr 226
// /*AFLA*/ #define __NR_ia32_lsetxattr 227
// /*AFLA*/ #define __NR_ia32_fsetxattr 228
// /*AFLA*/ #define __NR_ia32_getxattr 229
// /*AFLA*/ #define __NR_ia32_lgetxattr 230
// /*AFLA*/ #define __NR_ia32_fgetxattr 231
// /*AFLA*/ #define __NR_ia32_listxattr 232
// /*AFLA*/ #define __NR_ia32_llistxattr 233
// /*AFLA*/ #define __NR_ia32_flistxattr 234
// /*AFLA*/ #define __NR_ia32_removexattr 235
// /*AFLA*/ #define __NR_ia32_lremovexattr 236
// /*AFLA*/ #define __NR_ia32_fremovexattr 237
// /*AFLA*/ #define __NR_ia32_tkill 238
// /*AFLA*/ #define __NR_ia32_sendfile64 239
// /*AFLA*/ #define __NR_ia32_futex 240
// /*AFLA*/ #define __NR_ia32_sched_setaffinity 241
// /*AFLA*/ #define __NR_ia32_sched_getaffinity 242
// /*AFLA*/ #define __NR_ia32_set_thread_area 243
// /*AFLA*/ #define __NR_ia32_get_thread_area 244
// /*AFLA*/ #define __NR_ia32_io_setup 245
// /*AFLA*/ #define __NR_ia32_io_destroy 246
// /*AFLA*/ #define __NR_ia32_io_getevents 247
// /*AFLA*/ #define __NR_ia32_io_submit 248
// /*AFLA*/ #define __NR_ia32_io_cancel 249
// /*AFLA*/ #define __NR_ia32_fadvise64 250
// /*AFLA*/ #define __NR_ia32_exit_group 252
// /*AFLA*/ #define __NR_ia32_lookup_dcookie 253
// /*AFLA*/ #define __NR_ia32_epoll_create 254
// /*AFLA*/ #define __NR_ia32_epoll_ctl 255
// /*AFLA*/ #define __NR_ia32_epoll_wait 256
// /*AFLA*/ #define __NR_ia32_remap_file_pages 257
// /*AFLA*/ #define __NR_ia32_set_tid_address 258
// /*AFLA*/ #define __NR_ia32_timer_create 259
// /*AFLA*/ #define __NR_ia32_timer_settime 260
// /*AFLA*/ #define __NR_ia32_timer_gettime 261
// /*AFLA*/ #define __NR_ia32_timer_getoverrun 262
// /*AFLA*/ #define __NR_ia32_timer_delete 263
// /*AFLA*/ #define __NR_ia32_clock_settime 264
// /*AFLA*/ #define __NR_ia32_clock_gettime 265
// /*AFLA*/ #define __NR_ia32_clock_getres 266
// /*AFLA*/ #define __NR_ia32_clock_nanosleep 267
// /*AFLA*/ #define __NR_ia32_statfs64 268
// /*AFLA*/ #define __NR_ia32_fstatfs64 269
// /*AFLA*/ #define __NR_ia32_tgkill 270
// /*AFLA*/ #define __NR_ia32_utimes 271
// /*AFLA*/ #define __NR_ia32_fadvise64_64 272
// /*AFLA*/ #define __NR_ia32_vserver 273
// /*AFLA*/ #define __NR_ia32_mbind 274
// /*AFLA*/ #define __NR_ia32_get_mempolicy 275
// /*AFLA*/ #define __NR_ia32_set_mempolicy 276
// /*AFLA*/ #define __NR_ia32_mq_open 277
// /*AFLA*/ #define __NR_ia32_mq_unlink 278
// /*AFLA*/ #define __NR_ia32_mq_timedsend 279
// /*AFLA*/ #define __NR_ia32_mq_timedreceive 280
// /*AFLA*/ #define __NR_ia32_mq_notify 281
// /*AFLA*/ #define __NR_ia32_mq_getsetattr 282
// /*AFLA*/ #define __NR_ia32_kexec_load 283
// /*AFLA*/ #define __NR_ia32_waitid 284
// /*AFLA*/ #define __NR_ia32_add_key 286
// /*AFLA*/ #define __NR_ia32_request_key 287
// /*AFLA*/ #define __NR_ia32_keyctl 288
// /*AFLA*/ #define __NR_ia32_ioprio_set 289
// /*AFLA*/ #define __NR_ia32_ioprio_get 290
// /*AFLA*/ #define __NR_ia32_inotify_init 291
// /*AFLA*/ #define __NR_ia32_inotify_add_watch 292
// /*AFLA*/ #define __NR_ia32_inotify_rm_watch 293
// /*AFLA*/ #define __NR_ia32_migrate_pages 294
// /*AFLA*/ #define __NR_ia32_openat 295
// /*AFLA*/ #define __NR_ia32_mkdirat 296
// /*AFLA*/ #define __NR_ia32_mknodat 297
// /*AFLA*/ #define __NR_ia32_fchownat 298
// /*AFLA*/ #define __NR_ia32_futimesat 299
// /*AFLA*/ #define __NR_ia32_fstatat64 300
// /*AFLA*/ #define __NR_ia32_unlinkat 301
// /*AFLA*/ #define __NR_ia32_renameat 302
// /*AFLA*/ #define __NR_ia32_linkat 303
// /*AFLA*/ #define __NR_ia32_symlinkat 304
// /*AFLA*/ #define __NR_ia32_readlinkat 305
// /*AFLA*/ #define __NR_ia32_fchmodat 306
// /*AFLA*/ #define __NR_ia32_faccessat 307
// /*AFLA*/ #define __NR_ia32_pselect6 308
// /*AFLA*/ #define __NR_ia32_ppoll 309
// /*AFLA*/ #define __NR_ia32_unshare 310
// /*AFLA*/ #define __NR_ia32_set_robust_list 311
// /*AFLA*/ #define __NR_ia32_get_robust_list 312
// /*AFLA*/ #define __NR_ia32_splice 313
// /*AFLA*/ #define __NR_ia32_sync_file_range 314
// /*AFLA*/ #define __NR_ia32_tee 315
// /*AFLA*/ #define __NR_ia32_vmsplice 316
// /*AFLA*/ #define __NR_ia32_move_pages 317
// /*AFLA*/ #define __NR_ia32_getcpu 318
// /*AFLA*/ #define __NR_ia32_epoll_pwait 319
// /*AFLA*/ #define __NR_ia32_utimensat 320
// /*AFLA*/ #define __NR_ia32_signalfd 321
// /*AFLA*/ #define __NR_ia32_timerfd_create 322
// /*AFLA*/ #define __NR_ia32_eventfd 323
// /*AFLA*/ #define __NR_ia32_fallocate 324
// /*AFLA*/ #define __NR_ia32_timerfd_settime 325
// /*AFLA*/ #define __NR_ia32_timerfd_gettime 326
// /*AFLA*/ #define __NR_ia32_signalfd4 327
// /*AFLA*/ #define __NR_ia32_eventfd2 328
// /*AFLA*/ #define __NR_ia32_epoll_create1 329
// /*AFLA*/ #define __NR_ia32_dup3 330
// /*AFLA*/ #define __NR_ia32_pipe2 331
// /*AFLA*/ #define __NR_ia32_inotify_init1 332
// /*AFLA*/ #define __NR_ia32_preadv 333
// /*AFLA*/ #define __NR_ia32_pwritev 334
// /*AFLA*/ #define __NR_ia32_rt_tgsigqueueinfo 335
// /*AFLA*/ #define __NR_ia32_perf_event_open 336
// /*AFLA*/ #define __NR_ia32_recvmmsg 337
// /*AFLA*/ #define __NR_ia32_fanotify_init 338
// /*AFLA*/ #define __NR_ia32_fanotify_mark 339
// /*AFLA*/ #define __NR_ia32_prlimit64 340
// /*AFLA*/ #define __NR_ia32_name_to_handle_at 341
// /*AFLA*/ #define __NR_ia32_open_by_handle_at 342
// /*AFLA*/ #define __NR_ia32_clock_adjtime 343
// /*AFLA*/ #define __NR_ia32_syncfs 344
// /*AFLA*/ #define __NR_ia32_sendmmsg 345
// /*AFLA*/ #define __NR_ia32_setns 346
// /*AFLA*/ #define __NR_ia32_process_vm_readv 347
// /*AFLA*/ #define __NR_ia32_process_vm_writev 348
// /*AFLA*/ #define __NR_ia32_kcmp 349
// /*AFLA*/ #define __NR_ia32_finit_module 350
// /*AFLA*/ #define __NR_ia32_sched_setattr 351
// /*AFLA*/ #define __NR_ia32_sched_getattr 352
// /*AFLA*/ #define __NR_ia32_renameat2 353
// /*AFLA*/ #define __NR_ia32_seccomp 354
// /*AFLA*/ #define __NR_ia32_getrandom 355
// /*AFLA*/ #define __NR_ia32_memfd_create 356
// /*AFLA*/ #define __NR_ia32_bpf 357
// /*AFLA*/ #define __NR_ia32_execveat 358
// /*AFLA*/ #define __NR_ia32_socket 359
// /*AFLA*/ #define __NR_ia32_socketpair 360
// /*AFLA*/ #define __NR_ia32_bind 361
// /*AFLA*/ #define __NR_ia32_connect 362
// /*AFLA*/ #define __NR_ia32_listen 363
// /*AFLA*/ #define __NR_ia32_accept4 364
// /*AFLA*/ #define __NR_ia32_getsockopt 365
// /*AFLA*/ #define __NR_ia32_setsockopt 366
// /*AFLA*/ #define __NR_ia32_getsockname 367
// /*AFLA*/ #define __NR_ia32_getpeername 368
// /*AFLA*/ #define __NR_ia32_sendto 369
// /*AFLA*/ #define __NR_ia32_sendmsg 370
// /*AFLA*/ #define __NR_ia32_recvfrom 371
// /*AFLA*/ #define __NR_ia32_recvmsg 372
// /*AFLA*/ #define __NR_ia32_shutdown 373
// /*AFLA*/ #define __NR_ia32_userfaultfd 374
// /*AFLA*/ #define __NR_ia32_membarrier 375
// /*AFLA*/ #define __NR_ia32_mlock2 376
// /*AFLA*/ #define __NR_ia32_copy_file_range 377
// /*AFLA*/ #define __NR_ia32_preadv2 378
// /*AFLA*/ #define __NR_ia32_pwritev2 379
// /*AFLA*/ #define __NR_ia32_pkey_mprotect 380
// /*AFLA*/ #define __NR_ia32_pkey_alloc 381
// /*AFLA*/ #define __NR_ia32_pkey_free 382
// /*AFLA*/ 
// /*AFLA*/ #endif /* _ASM_X86_UNISTD_32_IA32_H */