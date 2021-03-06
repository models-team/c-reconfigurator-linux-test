// /*AFLA*/ #ifndef _ASM_X86_UNISTD_64_H
// /*AFLA*/ #define _ASM_X86_UNISTD_64_H 1
// /*AFLA*/ 
// /*AFLA*/ #define __NR_read 0
// /*AFLA*/ #define __NR_write 1
// /*AFLA*/ #define __NR_open 2
// /*AFLA*/ #define __NR_close 3
// /*AFLA*/ #define __NR_stat 4
// /*AFLA*/ #define __NR_fstat 5
// /*AFLA*/ #define __NR_lstat 6
// /*AFLA*/ #define __NR_poll 7
// /*AFLA*/ #define __NR_lseek 8
// /*AFLA*/ #define __NR_mmap 9
// /*AFLA*/ #define __NR_mprotect 10
// /*AFLA*/ #define __NR_munmap 11
// /*AFLA*/ #define __NR_brk 12
// /*AFLA*/ #define __NR_rt_sigaction 13
// /*AFLA*/ #define __NR_rt_sigprocmask 14
// /*AFLA*/ #define __NR_rt_sigreturn 15
// /*AFLA*/ #define __NR_ioctl 16
// /*AFLA*/ #define __NR_pread64 17
// /*AFLA*/ #define __NR_pwrite64 18
// /*AFLA*/ #define __NR_readv 19
// /*AFLA*/ #define __NR_writev 20
// /*AFLA*/ #define __NR_access 21
// /*AFLA*/ #define __NR_pipe 22
// /*AFLA*/ #define __NR_select 23
// /*AFLA*/ #define __NR_sched_yield 24
// /*AFLA*/ #define __NR_mremap 25
// /*AFLA*/ #define __NR_msync 26
// /*AFLA*/ #define __NR_mincore 27
// /*AFLA*/ #define __NR_madvise 28
// /*AFLA*/ #define __NR_shmget 29
// /*AFLA*/ #define __NR_shmat 30
// /*AFLA*/ #define __NR_shmctl 31
// /*AFLA*/ #define __NR_dup 32
// /*AFLA*/ #define __NR_dup2 33
// /*AFLA*/ #define __NR_pause 34
// /*AFLA*/ #define __NR_nanosleep 35
// /*AFLA*/ #define __NR_getitimer 36
// /*AFLA*/ #define __NR_alarm 37
// /*AFLA*/ #define __NR_setitimer 38
// /*AFLA*/ #define __NR_getpid 39
// /*AFLA*/ #define __NR_sendfile 40
// /*AFLA*/ #define __NR_socket 41
// /*AFLA*/ #define __NR_connect 42
// /*AFLA*/ #define __NR_accept 43
// /*AFLA*/ #define __NR_sendto 44
// /*AFLA*/ #define __NR_recvfrom 45
// /*AFLA*/ #define __NR_sendmsg 46
// /*AFLA*/ #define __NR_recvmsg 47
// /*AFLA*/ #define __NR_shutdown 48
// /*AFLA*/ #define __NR_bind 49
// /*AFLA*/ #define __NR_listen 50
// /*AFLA*/ #define __NR_getsockname 51
// /*AFLA*/ #define __NR_getpeername 52
// /*AFLA*/ #define __NR_socketpair 53
// /*AFLA*/ #define __NR_setsockopt 54
// /*AFLA*/ #define __NR_getsockopt 55
// /*AFLA*/ #define __NR_clone 56
// /*AFLA*/ #define __NR_fork 57
// /*AFLA*/ #define __NR_vfork 58
// /*AFLA*/ #define __NR_execve 59
// /*AFLA*/ #define __NR_exit 60
// /*AFLA*/ #define __NR_wait4 61
// /*AFLA*/ #define __NR_kill 62
// /*AFLA*/ #define __NR_uname 63
// /*AFLA*/ #define __NR_semget 64
// /*AFLA*/ #define __NR_semop 65
// /*AFLA*/ #define __NR_semctl 66
// /*AFLA*/ #define __NR_shmdt 67
// /*AFLA*/ #define __NR_msgget 68
// /*AFLA*/ #define __NR_msgsnd 69
// /*AFLA*/ #define __NR_msgrcv 70
// /*AFLA*/ #define __NR_msgctl 71
// /*AFLA*/ #define __NR_fcntl 72
// /*AFLA*/ #define __NR_flock 73
// /*AFLA*/ #define __NR_fsync 74
// /*AFLA*/ #define __NR_fdatasync 75
// /*AFLA*/ #define __NR_truncate 76
// /*AFLA*/ #define __NR_ftruncate 77
// /*AFLA*/ #define __NR_getdents 78
// /*AFLA*/ #define __NR_getcwd 79
// /*AFLA*/ #define __NR_chdir 80
// /*AFLA*/ #define __NR_fchdir 81
// /*AFLA*/ #define __NR_rename 82
// /*AFLA*/ #define __NR_mkdir 83
// /*AFLA*/ #define __NR_rmdir 84
// /*AFLA*/ #define __NR_creat 85
// /*AFLA*/ #define __NR_link 86
// /*AFLA*/ #define __NR_unlink 87
// /*AFLA*/ #define __NR_symlink 88
// /*AFLA*/ #define __NR_readlink 89
// /*AFLA*/ #define __NR_chmod 90
// /*AFLA*/ #define __NR_fchmod 91
// /*AFLA*/ #define __NR_chown 92
// /*AFLA*/ #define __NR_fchown 93
// /*AFLA*/ #define __NR_lchown 94
// /*AFLA*/ #define __NR_umask 95
// /*AFLA*/ #define __NR_gettimeofday 96
// /*AFLA*/ #define __NR_getrlimit 97
// /*AFLA*/ #define __NR_getrusage 98
// /*AFLA*/ #define __NR_sysinfo 99
// /*AFLA*/ #define __NR_times 100
// /*AFLA*/ #define __NR_ptrace 101
// /*AFLA*/ #define __NR_getuid 102
// /*AFLA*/ #define __NR_syslog 103
// /*AFLA*/ #define __NR_getgid 104
// /*AFLA*/ #define __NR_setuid 105
// /*AFLA*/ #define __NR_setgid 106
// /*AFLA*/ #define __NR_geteuid 107
// /*AFLA*/ #define __NR_getegid 108
// /*AFLA*/ #define __NR_setpgid 109
// /*AFLA*/ #define __NR_getppid 110
// /*AFLA*/ #define __NR_getpgrp 111
// /*AFLA*/ #define __NR_setsid 112
// /*AFLA*/ #define __NR_setreuid 113
// /*AFLA*/ #define __NR_setregid 114
// /*AFLA*/ #define __NR_getgroups 115
// /*AFLA*/ #define __NR_setgroups 116
// /*AFLA*/ #define __NR_setresuid 117
// /*AFLA*/ #define __NR_getresuid 118
// /*AFLA*/ #define __NR_setresgid 119
// /*AFLA*/ #define __NR_getresgid 120
// /*AFLA*/ #define __NR_getpgid 121
// /*AFLA*/ #define __NR_setfsuid 122
// /*AFLA*/ #define __NR_setfsgid 123
// /*AFLA*/ #define __NR_getsid 124
// /*AFLA*/ #define __NR_capget 125
// /*AFLA*/ #define __NR_capset 126
// /*AFLA*/ #define __NR_rt_sigpending 127
// /*AFLA*/ #define __NR_rt_sigtimedwait 128
// /*AFLA*/ #define __NR_rt_sigqueueinfo 129
// /*AFLA*/ #define __NR_rt_sigsuspend 130
// /*AFLA*/ #define __NR_sigaltstack 131
// /*AFLA*/ #define __NR_utime 132
// /*AFLA*/ #define __NR_mknod 133
// /*AFLA*/ #define __NR_uselib 134
// /*AFLA*/ #define __NR_personality 135
// /*AFLA*/ #define __NR_ustat 136
// /*AFLA*/ #define __NR_statfs 137
// /*AFLA*/ #define __NR_fstatfs 138
// /*AFLA*/ #define __NR_sysfs 139
// /*AFLA*/ #define __NR_getpriority 140
// /*AFLA*/ #define __NR_setpriority 141
// /*AFLA*/ #define __NR_sched_setparam 142
// /*AFLA*/ #define __NR_sched_getparam 143
// /*AFLA*/ #define __NR_sched_setscheduler 144
// /*AFLA*/ #define __NR_sched_getscheduler 145
// /*AFLA*/ #define __NR_sched_get_priority_max 146
// /*AFLA*/ #define __NR_sched_get_priority_min 147
// /*AFLA*/ #define __NR_sched_rr_get_interval 148
// /*AFLA*/ #define __NR_mlock 149
// /*AFLA*/ #define __NR_munlock 150
// /*AFLA*/ #define __NR_mlockall 151
// /*AFLA*/ #define __NR_munlockall 152
// /*AFLA*/ #define __NR_vhangup 153
// /*AFLA*/ #define __NR_modify_ldt 154
// /*AFLA*/ #define __NR_pivot_root 155
// /*AFLA*/ #define __NR__sysctl 156
// /*AFLA*/ #define __NR_prctl 157
// /*AFLA*/ #define __NR_arch_prctl 158
// /*AFLA*/ #define __NR_adjtimex 159
// /*AFLA*/ #define __NR_setrlimit 160
// /*AFLA*/ #define __NR_chroot 161
// /*AFLA*/ #define __NR_sync 162
// /*AFLA*/ #define __NR_acct 163
// /*AFLA*/ #define __NR_settimeofday 164
// /*AFLA*/ #define __NR_mount 165
// /*AFLA*/ #define __NR_umount2 166
// /*AFLA*/ #define __NR_swapon 167
// /*AFLA*/ #define __NR_swapoff 168
// /*AFLA*/ #define __NR_reboot 169
// /*AFLA*/ #define __NR_sethostname 170
// /*AFLA*/ #define __NR_setdomainname 171
// /*AFLA*/ #define __NR_iopl 172
// /*AFLA*/ #define __NR_ioperm 173
// /*AFLA*/ #define __NR_create_module 174
// /*AFLA*/ #define __NR_init_module 175
// /*AFLA*/ #define __NR_delete_module 176
// /*AFLA*/ #define __NR_get_kernel_syms 177
// /*AFLA*/ #define __NR_query_module 178
// /*AFLA*/ #define __NR_quotactl 179
// /*AFLA*/ #define __NR_nfsservctl 180
// /*AFLA*/ #define __NR_getpmsg 181
// /*AFLA*/ #define __NR_putpmsg 182
// /*AFLA*/ #define __NR_afs_syscall 183
// /*AFLA*/ #define __NR_tuxcall 184
// /*AFLA*/ #define __NR_security 185
// /*AFLA*/ #define __NR_gettid 186
// /*AFLA*/ #define __NR_readahead 187
// /*AFLA*/ #define __NR_setxattr 188
// /*AFLA*/ #define __NR_lsetxattr 189
// /*AFLA*/ #define __NR_fsetxattr 190
// /*AFLA*/ #define __NR_getxattr 191
// /*AFLA*/ #define __NR_lgetxattr 192
// /*AFLA*/ #define __NR_fgetxattr 193
// /*AFLA*/ #define __NR_listxattr 194
// /*AFLA*/ #define __NR_llistxattr 195
// /*AFLA*/ #define __NR_flistxattr 196
// /*AFLA*/ #define __NR_removexattr 197
// /*AFLA*/ #define __NR_lremovexattr 198
// /*AFLA*/ #define __NR_fremovexattr 199
// /*AFLA*/ #define __NR_tkill 200
// /*AFLA*/ #define __NR_time 201
// /*AFLA*/ #define __NR_futex 202
// /*AFLA*/ #define __NR_sched_setaffinity 203
// /*AFLA*/ #define __NR_sched_getaffinity 204
// /*AFLA*/ #define __NR_set_thread_area 205
// /*AFLA*/ #define __NR_io_setup 206
// /*AFLA*/ #define __NR_io_destroy 207
// /*AFLA*/ #define __NR_io_getevents 208
// /*AFLA*/ #define __NR_io_submit 209
// /*AFLA*/ #define __NR_io_cancel 210
// /*AFLA*/ #define __NR_get_thread_area 211
// /*AFLA*/ #define __NR_lookup_dcookie 212
// /*AFLA*/ #define __NR_epoll_create 213
// /*AFLA*/ #define __NR_epoll_ctl_old 214
// /*AFLA*/ #define __NR_epoll_wait_old 215
// /*AFLA*/ #define __NR_remap_file_pages 216
// /*AFLA*/ #define __NR_getdents64 217
// /*AFLA*/ #define __NR_set_tid_address 218
// /*AFLA*/ #define __NR_restart_syscall 219
// /*AFLA*/ #define __NR_semtimedop 220
// /*AFLA*/ #define __NR_fadvise64 221
// /*AFLA*/ #define __NR_timer_create 222
// /*AFLA*/ #define __NR_timer_settime 223
// /*AFLA*/ #define __NR_timer_gettime 224
// /*AFLA*/ #define __NR_timer_getoverrun 225
// /*AFLA*/ #define __NR_timer_delete 226
// /*AFLA*/ #define __NR_clock_settime 227
// /*AFLA*/ #define __NR_clock_gettime 228
// /*AFLA*/ #define __NR_clock_getres 229
// /*AFLA*/ #define __NR_clock_nanosleep 230
// /*AFLA*/ #define __NR_exit_group 231
// /*AFLA*/ #define __NR_epoll_wait 232
// /*AFLA*/ #define __NR_epoll_ctl 233
// /*AFLA*/ #define __NR_tgkill 234
// /*AFLA*/ #define __NR_utimes 235
// /*AFLA*/ #define __NR_vserver 236
// /*AFLA*/ #define __NR_mbind 237
// /*AFLA*/ #define __NR_set_mempolicy 238
// /*AFLA*/ #define __NR_get_mempolicy 239
// /*AFLA*/ #define __NR_mq_open 240
// /*AFLA*/ #define __NR_mq_unlink 241
// /*AFLA*/ #define __NR_mq_timedsend 242
// /*AFLA*/ #define __NR_mq_timedreceive 243
// /*AFLA*/ #define __NR_mq_notify 244
// /*AFLA*/ #define __NR_mq_getsetattr 245
// /*AFLA*/ #define __NR_kexec_load 246
// /*AFLA*/ #define __NR_waitid 247
// /*AFLA*/ #define __NR_add_key 248
// /*AFLA*/ #define __NR_request_key 249
// /*AFLA*/ #define __NR_keyctl 250
// /*AFLA*/ #define __NR_ioprio_set 251
// /*AFLA*/ #define __NR_ioprio_get 252
// /*AFLA*/ #define __NR_inotify_init 253
// /*AFLA*/ #define __NR_inotify_add_watch 254
// /*AFLA*/ #define __NR_inotify_rm_watch 255
// /*AFLA*/ #define __NR_migrate_pages 256
// /*AFLA*/ #define __NR_openat 257
// /*AFLA*/ #define __NR_mkdirat 258
// /*AFLA*/ #define __NR_mknodat 259
// /*AFLA*/ #define __NR_fchownat 260
// /*AFLA*/ #define __NR_futimesat 261
// /*AFLA*/ #define __NR_newfstatat 262
// /*AFLA*/ #define __NR_unlinkat 263
// /*AFLA*/ #define __NR_renameat 264
// /*AFLA*/ #define __NR_linkat 265
// /*AFLA*/ #define __NR_symlinkat 266
// /*AFLA*/ #define __NR_readlinkat 267
// /*AFLA*/ #define __NR_fchmodat 268
// /*AFLA*/ #define __NR_faccessat 269
// /*AFLA*/ #define __NR_pselect6 270
// /*AFLA*/ #define __NR_ppoll 271
// /*AFLA*/ #define __NR_unshare 272
// /*AFLA*/ #define __NR_set_robust_list 273
// /*AFLA*/ #define __NR_get_robust_list 274
// /*AFLA*/ #define __NR_splice 275
// /*AFLA*/ #define __NR_tee 276
// /*AFLA*/ #define __NR_sync_file_range 277
// /*AFLA*/ #define __NR_vmsplice 278
// /*AFLA*/ #define __NR_move_pages 279
// /*AFLA*/ #define __NR_utimensat 280
// /*AFLA*/ #define __NR_epoll_pwait 281
// /*AFLA*/ #define __NR_signalfd 282
// /*AFLA*/ #define __NR_timerfd_create 283
// /*AFLA*/ #define __NR_eventfd 284
// /*AFLA*/ #define __NR_fallocate 285
// /*AFLA*/ #define __NR_timerfd_settime 286
// /*AFLA*/ #define __NR_timerfd_gettime 287
// /*AFLA*/ #define __NR_accept4 288
// /*AFLA*/ #define __NR_signalfd4 289
// /*AFLA*/ #define __NR_eventfd2 290
// /*AFLA*/ #define __NR_epoll_create1 291
// /*AFLA*/ #define __NR_dup3 292
// /*AFLA*/ #define __NR_pipe2 293
// /*AFLA*/ #define __NR_inotify_init1 294
// /*AFLA*/ #define __NR_preadv 295
// /*AFLA*/ #define __NR_pwritev 296
// /*AFLA*/ #define __NR_rt_tgsigqueueinfo 297
// /*AFLA*/ #define __NR_perf_event_open 298
// /*AFLA*/ #define __NR_recvmmsg 299
// /*AFLA*/ #define __NR_fanotify_init 300
// /*AFLA*/ #define __NR_fanotify_mark 301
// /*AFLA*/ #define __NR_prlimit64 302
// /*AFLA*/ #define __NR_name_to_handle_at 303
// /*AFLA*/ #define __NR_open_by_handle_at 304
// /*AFLA*/ #define __NR_clock_adjtime 305
// /*AFLA*/ #define __NR_syncfs 306
// /*AFLA*/ #define __NR_sendmmsg 307
// /*AFLA*/ #define __NR_setns 308
// /*AFLA*/ #define __NR_getcpu 309
// /*AFLA*/ #define __NR_process_vm_readv 310
// /*AFLA*/ #define __NR_process_vm_writev 311
// /*AFLA*/ #define __NR_kcmp 312
// /*AFLA*/ #define __NR_finit_module 313
// /*AFLA*/ #define __NR_sched_setattr 314
// /*AFLA*/ #define __NR_sched_getattr 315
// /*AFLA*/ #define __NR_renameat2 316
// /*AFLA*/ #define __NR_seccomp 317
// /*AFLA*/ #define __NR_getrandom 318
// /*AFLA*/ #define __NR_memfd_create 319
// /*AFLA*/ #define __NR_kexec_file_load 320
// /*AFLA*/ #define __NR_bpf 321
// /*AFLA*/ #define __NR_execveat 322
// /*AFLA*/ #define __NR_userfaultfd 323
// /*AFLA*/ #define __NR_membarrier 324
// /*AFLA*/ #define __NR_mlock2 325
// /*AFLA*/ #define __NR_copy_file_range 326
// /*AFLA*/ #define __NR_preadv2 327
// /*AFLA*/ #define __NR_pwritev2 328
// /*AFLA*/ #define __NR_pkey_mprotect 329
// /*AFLA*/ #define __NR_pkey_alloc 330
// /*AFLA*/ #define __NR_pkey_free 331
// /*AFLA*/ 
// /*AFLA*/ #endif /* _ASM_X86_UNISTD_64_H */
