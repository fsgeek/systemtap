/* -*- linux-c -*- 
 * Syscall compatibility defines.
 * Copyright (C) 2013-2014 Red Hat Inc.
 *
 * This file is part of systemtap, and is free software.  You can
 * redistribute it and/or modify it under the terms of the GNU General
 * Public License (GPL); either version 2, or (at your option) any
 * later version.
 */

#ifndef _COMPAT_UNISTD_H_
#define _COMPAT_UNISTD_H_

// Older kernels (like RHEL5) supported __NR_sendfile64. For newer
// kernels, we'll just define __NR_sendfile64 in terms of
// __NR_sendfile.
#ifndef __NR_sendfile64
#define __NR_sendfile64 __NR_sendfile
#endif

#ifndef __NR_syscall_max
#define __NR_syscall_max 0xffff
#endif

#ifndef __NR_accept
#define __NR_accept (__NR_syscall_max + 1)
#endif
#ifndef __NR_accept4
#define __NR_accept4 (__NR_syscall_max + 1)
#endif
#ifndef __NR_bind
#define __NR_bind (__NR_syscall_max + 1)
#endif
#ifndef __NR_connect
#define __NR_connect (__NR_syscall_max + 1)
#endif
#ifndef __NR_fadvise64_64
#define __NR_fadvise64_64 (__NR_syscall_max + 1)
#endif
#ifndef __NR_ftruncate
#define __NR_ftruncate (__NR_syscall_max + 1)
#endif
#ifndef __NR_futimesat
#define __NR_futimesat (__NR_syscall_max + 1)
#endif
#ifndef __NR_getpeername
#define __NR_getpeername (__NR_syscall_max + 1)
#endif
#ifndef __NR_getsockname
#define __NR_getsockname (__NR_syscall_max + 1)
#endif
#ifndef __NR_ipc
#define __NR_ipc (__NR_syscall_max + 1)
#endif
#ifndef __NR_listen
#define __NR_listen (__NR_syscall_max + 1)
#endif
#ifndef __NR_mmap2
#define __NR_mmap2 (__NR_syscall_max + 1)
#endif
#ifndef __NR_move_pages
#define __NR_move_pages (__NR_syscall_max + 1)
#endif
#ifndef __NR_msgctl
#define __NR_msgctl (__NR_syscall_max + 1)
#endif
#ifndef __NR_nfsservctl
#define __NR_nfsservctl (__NR_syscall_max + 1)
#endif
#ifndef __NR_open
#define __NR_open (__NR_syscall_max + 1)
#endif
#ifndef __NR_pselect7
#define __NR_pselect7 (__NR_syscall_max + 1)
#endif
#ifndef __NR_recv
#define __NR_recv (__NR_syscall_max + 1)
#endif
#ifndef __NR_recvfrom
#define __NR_recvfrom (__NR_syscall_max + 1)
#endif
#ifndef __NR_recvmsg
#define __NR_recvmsg (__NR_syscall_max + 1)
#endif
#ifndef __NR_send
#define __NR_send (__NR_syscall_max + 1)
#endif
#ifndef __NR_sendmmsg
#define __NR_sendmmsg (__NR_syscall_max + 1)
#endif
#ifndef __NR_sendmsg
#define __NR_sendmsg (__NR_syscall_max + 1)
#endif
#ifndef __NR_sendto
#define __NR_sendto (__NR_syscall_max + 1)
#endif
#ifndef __NR_getsockopt
#define __NR_getsockopt (__NR_syscall_max + 1)
#endif
#ifndef __NR_renameat2
#define __NR_renameat2 (__NR_syscall_max + 1)
#endif
#ifndef __NR_semtimedop
#define __NR_semtimedop (__NR_syscall_max + 1)
#endif
#ifndef __NR_setsockopt
#define __NR_setsockopt (__NR_syscall_max + 1)
#endif
#ifndef __NR_shutdown
#define __NR_shutdown (__NR_syscall_max + 1)
#endif
#ifndef __NR_sigprocmask
#define __NR_sigprocmask (__NR_syscall_max + 1)
#endif
#ifndef __NR_epoll_wait
#define __NR_epoll_wait (__NR_syscall_max + 1)
#endif
#ifndef __NR_shmctl
#define __NR_shmctl (__NR_syscall_max + 1)
#endif
#ifndef __NR_socket
#define __NR_socket (__NR_syscall_max + 1)
#endif
#ifndef __NR_socketpair
#define __NR_socketpair (__NR_syscall_max + 1)
#endif
#ifndef __NR_truncate
#define __NR_truncate (__NR_syscall_max + 1)
#endif

#if defined(__x86_64__)

// On older kernels (like RHEL5), we have to define our own 32-bit
// syscall numbers.
#ifndef __NR_ia32_access
#define __NR_ia32_access 33
#endif
#ifndef __NR_ia32_acct
#define __NR_ia32_acct 51
#endif
#ifndef __NR_ia32_add_key
#define __NR_ia32_add_key 286
#endif
#ifndef __NR_ia32_bpf
#define __NR_ia32_bpf 357
#endif
#ifndef __NR_ia32_capget
#define __NR_ia32_capget 184
#endif
#ifndef __NR_ia32_capset
#define __NR_ia32_capset 185
#endif
#ifndef __NR_ia32_chdir
#define __NR_ia32_chdir 12
#endif
#ifndef __NR_ia32_chown32
#define __NR_ia32_chown32 212
#endif
#ifndef __NR_ia32_chroot
#define __NR_ia32_chroot 61
#endif
#ifndef __NR_ia32_clone
#define __NR_ia32_clone 120
#endif
#ifndef __NR_ia32_close
#define __NR_ia32_close 6
#endif
#ifndef __NR_ia32_creat
#define __NR_ia32_creat 8
#endif
#ifndef __NR_ia32_dup
#define __NR_ia32_dup 41
#endif
#ifndef __NR_ia32_dup2
#define __NR_ia32_dup2 63
#endif
#ifndef __NR_ia32_dup3
#define __NR_ia32_dup3 330
#endif
#ifndef __NR_ia32_epoll_wait
#define __NR_ia32_epoll_wait 256
#endif
#ifndef __NR_ia32_eventfd2
#define __NR_ia32_eventfd2 328
#endif
#ifndef __NR_ia32_exit
#define __NR_ia32_exit 1
#endif
#ifndef __NR_ia32_exit_group
#define __NR_ia32_exit_group 252
#endif
#ifndef __NR_ia32_faccessat
#define __NR_ia32_faccessat 307
#endif
#ifndef __NR_ia32_fchdir
#define __NR_ia32_fchdir 133
#endif
#ifndef __NR_ia32_fchmodat
#define __NR_ia32_fchmodat 306
#endif
#ifndef __NR_ia32_fchown32
#define __NR_ia32_fchown32 207
#endif
#ifndef __NR_ia32_fchownat
#define __NR_ia32_fchownat 298
#endif
#ifndef __NR_ia32_fgetxattr
#define __NR_ia32_fgetxattr 231
#endif
#ifndef __NR_ia32_flistxattr
#define __NR_ia32_flistxattr 234
#endif
#ifndef __NR_ia32_flock
#define __NR_ia32_flock 143
#endif
#ifndef __NR_ia32_fremovexattr
#define __NR_ia32_fremovexattr 237
#endif
#ifndef __NR_ia32_fsetxattr
#define __NR_ia32_fsetxattr 228
#endif
#ifndef __NR_ia32_ftruncate
#define __NR_ia32_ftruncate 93
#endif
#ifndef __NR_ia32_futimesat
#define __NR_ia32_futimesat 299
#endif
#ifndef __NR_ia32_getcpu
#define __NR_ia32_getcpu 318
#endif
#ifndef __NR_ia32_getpgid
#define __NR_ia32_getpgid 132
#endif
#ifndef __NR_ia32_getrandom
#define __NR_ia32_getrandom 355
#endif 
#ifndef __NR_ia32_getsid
#define __NR_ia32_getsid 147
#endif
#ifndef __NR_ia32_inotify_init1
#define __NR_ia32_inotify_init1 332
#endif
#ifndef __NR_ia32_ioprio_get
#define __NR_ia32_ioprio_get 290
#endif
#ifndef __NR_ia32_ioprio_set
#define __NR_ia32_ioprio_set 289
#endif
#ifndef __NR_ia32_ipc
#define __NR_ia32_ipc 117
#endif
#ifndef __NR_ia32_kcmp
#define __NR_ia32_kcmp 349 
#endif
#ifndef __NR_ia32_keyctl
#define __NR_ia32_keyctl 288
#endif
#ifndef __NR_ia32_kill
#define __NR_ia32_kill 37
#endif
#ifndef __NR_ia32_link
#define __NR_ia32_link 9
#endif
#ifndef __NR_ia32_linkat
#define __NR_ia32_linkat 303
#endif
#ifndef __NR_ia32_lchown32
#define __NR_ia32_lchown32 198
#endif
#ifndef __NR_ia32_mkdir
#define __NR_ia32_mkdir 39
#endif
#ifndef __NR_ia32_mkdirat
#define __NR_ia32_mkdirat 296
#endif
#ifndef __NR_ia32_mknodat
#define __NR_ia32_mknodat 297
#endif
#ifndef __NR_ia32_mmap2
#define __NR_ia32_mmap2 192
#endif
#ifndef __NR_ia32_msgctl
#define __NR_ia32_msgctl 192
#endif
#ifndef __NR_ia32_name_to_handle_at
#define __NR_ia32_name_to_handle_at 341
#endif
#ifndef __NR_ia32_nfsservctl
#define __NR_ia32_nfsservctl 169
#endif
#ifndef __NR_ia32_open
#define __NR_ia32_open 5
#endif
#ifndef __NR_ia32_open_by_handle_at
#define __NR_ia32_open_by_handle_at 342
#endif
#ifndef __NR_ia32_openat
#define __NR_ia32_openat 295
#endif
#ifndef __NR_ia32_pipe2
#define __NR_ia32_pipe2 331
#endif
#ifndef __NR_ia32_pselect7
// Since a kernel that had a pselect7 syscall can't be found, just use
// __NR_syscall_max for __NR_ia32_pselect7.
#define __NR_ia32_pselect7 (__NR_syscall_max + 1)
#endif
#ifndef __NR_ia32_read
#define __NR_ia32_read 3
#endif
#ifndef __NR_ia32_readlink
#define __NR_ia32_readlink 85 
#endif
#ifndef __NR_ia32_readlinkat
#define __NR_ia32_readlinkat 305
#endif
#ifndef __NR_ia32_renameat
#define __NR_ia32_renameat 302
#endif
#ifndef __NR_ia32_renameat2
#define __NR_ia32_renameat2 353
#endif
#ifndef __NR_ia32_request_key
#define __NR_ia32_request_key 287
#endif
#ifndef __NR_ia32_rmdir
#define __NR_ia32_rmdif 40
#endif
#ifndef __NR_ia32_rt_sigprocmask
#define __NR_ia32_rt_sigprocmask 175
#endif
#ifndef __NR_ia32_sendmmsg
#define __NR_ia32_sendmmsg 345
#endif
#ifndef __NR_ia32_setfsgid32
#define __NR_ia32_setfsgid32 216
#endif
#ifndef __NR_ia32_setfsuid32
#define __NR_ia32_setfsuid32 215
#endif
#ifndef __NR_ia32_setgid32
#define __NR_ia32_setgid32 214
#endif
#ifndef __NR_ia32_setresgid32
#define __NR_ia32_setresgid32 210
#endif
#ifndef __NR_ia32_setresuid32
#define __NR_ia32_setresuid32 208
#endif
#ifndef __NR_ia32_setregid32
#define __NR_ia32_setregid32 204
#endif
#ifndef __NR_ia32_setreuid32
#define __NR_ia32_setreuid32 203
#endif
#ifndef __NR_ia32_setuid32
#define __NR_ia32_setuid32 213
#endif
// Since a kernel that had a 32-bit shmctl syscall can't be found
// (they all used __NR_ipc), just use __NR_syscall_max.
#ifndef __NR_ia32_shmctl
#define __NR_ia32_shmctl (__NR_syscall_max + 1)
#endif
#ifndef __NR_ia32_symlink
#define __NR_ia32_symlink 83
#endif
#ifndef __NR_ia32_symlinkat
#define __NR_ia32_symlinkat 304
#endif
#ifndef __NR_ia32_truncate
#define __NR_ia32_truncate 92
#endif
#ifndef __NR_ia32_umount2
#define __NR_ia32_umount2 52
#endif
#ifndef __NR_ia32_wait4
#define __NR_ia32_wait4 114
#endif
#ifndef __NR_ia32_write
#define __NR_ia32_write 4
#endif

#define __NR_compat_access		__NR_ia32_access
#define __NR_compat_acct		__NR_ia32_acct
#define __NR_compat_add_key		__NR_ia32_add_key
#define __NR_compat_bpf			__NR_ia32_bpf
#define __NR_compat_capget		__NR_ia32_capget
#define __NR_compat_capset		__NR_ia32_capset
#define __NR_compat_chdir		__NR_ia32_chdir
#define __NR_compat_chroot		__NR_ia32_chroot
#define __NR_compat_clone		__NR_ia32_clone
#define __NR_compat_close		__NR_ia32_close
#define __NR_compat_creat		__NR_ia32_creat
#define __NR_compat_dup			__NR_ia32_dup
#define __NR_compat_dup2		__NR_ia32_dup2
#define __NR_compat_dup3		__NR_ia32_dup3
#define __NR_compat_epoll_wait		__NR_ia32_epoll_wait
#define __NR_compat_eventfd2		__NR_ia32_eventfd2
#define __NR_compat_exit		__NR_ia32_exit
#define __NR_compat_exit_group		__NR_ia32_exit_group
#define __NR_compat_faccessat		__NR_ia32_faccessat
#define __NR_compat_fchdir		__NR_ia32_fchdir
#define __NR_compat_fchmodat		__NR_ia32_fchmodat
#define __NR_compat_fchownat		__NR_ia32_fchownat
#define __NR_compat_fgetxattr		__NR_ia32_fgetxattr
#define __NR_compat_flistxattr		__NR_ia32_flistxattr
#define __NR_compat_flock		__NR_ia32_flock
#define __NR_compat_fremovexattr	__NR_ia32_fremovexattr
#define __NR_compat_fsetxattr		__NR_ia32_fsetxattr
#define __NR_compat_ftruncate		__NR_ia32_ftruncate
#define __NR_compat_futimesat		__NR_ia32_futimesat
#define __NR_compat_getcpu		__NR_ia32_getcpu
#define __NR_compat_getpgid		__NR_ia32_getpgid
#define __NR_compat_getrandom		__NR_ia32_getrandom
#define __NR_compat_getsid		__NR_ia32_getsid
#define __NR_compat_inotify_init1	__NR_ia32_inotify_init1
#define __NR_compat_ioprio_get		__NR_ia32_ioprio_get
#define __NR_compat_ioprio_set		__NR_ia32_ioprio_set
#define __NR_compat_ipc			__NR_ia32_ipc
#define __NR_compat_kcmp		__NR_ia32_kcmp
#define __NR_compat_keyctl		__NR_ia32_keyctl
#define __NR_compat_kill		__NR_ia32_kill
#define __NR_compat_link		__NR_ia32_link
#define __NR_compat_linkat		__NR_ia32_linkat
#define __NR_compat_mkdir		__NR_ia32_mkdir
#define __NR_compat_mkdirat		__NR_ia32_mkdirat
#define __NR_compat_mknodat		__NR_ia32_mknodat
#define __NR_compat_msgctl		__NR_ia32_msgctl
#define __NR_compat_name_to_handle_at	__NR_ia32_name_to_handle_at
#define __NR_compat_nfsservctl		__NR_ia32_nfsservctl
#define __NR_compat_open		__NR_ia32_open
#define __NR_compat_open_by_handle_at	__NR_ia32_open_by_handle_at
#define __NR_compat_openat		__NR_ia32_openat
#define __NR_compat_pipe2		__NR_ia32_pipe2
#define __NR_compat_pselect7		__NR_ia32_pselect7
#define __NR_compat_read		__NR_ia32_read
#define __NR_compat_readlink		__NR_ia32_readlink
#define __NR_compat_readlinkat		__NR_ia32_readlinkat
#define __NR_compat_renameat		__NR_ia32_renameat
#define __NR_compat_renameat2		__NR_ia32_renameat2
#define __NR_compat_request_key		__NR_ia32_request_key
#define __NR_compat_rmdir		__NR_ia32_rmdir
#define __NR_compat_rt_sigprocmask	__NR_ia32_rt_sigprocmask
#define __NR_compat_sendmmsg		__NR_ia32_sendmmsg
#define __NR_compat_shmctl		__NR_ia32_shmctl
#define __NR_compat_symlink		__NR_ia32_symlink
#define __NR_compat_symlinkat		__NR_ia32_symlinkat
#define __NR_compat_truncate		__NR_ia32_truncate
#define __NR_compat_umount2		__NR_ia32_umount2
#define __NR_compat_wait4		__NR_ia32_wait4
#define __NR_compat_write		__NR_ia32_write

#endif	/* __x86_64__ */

#if defined(__powerpc64__) || defined (__s390x__) || defined(__aarch64__)

// On the ppc64 and s390x, the 32-bit syscalls use the same number
// as the 64-bit syscalls.
//
// On arm64, the 32-bit syscall *can* use different numbers than the
// 64-bit syscalls, but the majority do not. The following syscalls
// use the same number.

#define __NR_compat_access		__NR_access
#define __NR_compat_acct		__NR_acct
#define __NR_compat_add_key		__NR_add_key
#define __NR_compat_bpf			__NR_bpf
#define __NR_compat_capget		__NR_capget
#define __NR_compat_capset		__NR_capset
#define __NR_compat_chdir		__NR_chdir
#define __NR_compat_chroot		__NR_chroot
#define __NR_compat_clone		__NR_clone
#define __NR_compat_close		__NR_close
#define __NR_compat_creat		__NR_creat
#define __NR_compat_dup			__NR_dup
#define __NR_compat_dup2		__NR_dup2
#define __NR_compat_dup3		__NR_dup3
#define __NR_compat_epoll_wait		__NR_epoll_wait
#define __NR_compat_eventfd2		__NR_eventfd2
#define __NR_compat_exit		__NR_exit
#define __NR_compat_exit_group		__NR_exit_group
#define __NR_compat_faccessat		__NR_faccessat
#define __NR_compat_fchdir		__NR_fchdir
#define __NR_compat_fchmodat		__NR_fchmodat
#define __NR_compat_fchownat		__NR_fchownat
#define __NR_compat_fgetxattr		__NR_fgetxattr
#define __NR_compat_flistxattr		__NR_flistxattr
#define __NR_compat_flock		__NR_flock
#define __NR_compat_fremovexattr	__NR_fremovexattr
#define __NR_compat_fsetxattr		__NR_fsetxattr
#define __NR_compat_ftruncate		__NR_ftruncate
#define __NR_compat_futimesat		__NR_futimesat
#define __NR_compat_getcpu		__NR_getcpu
#define __NR_compat_getpgid		__NR_getpgid
#define __NR_compat_getrandom		__NR_getrandom
#define __NR_compat_getsid		__NR_getsid
#define __NR_compat_inotify_init1	__NR_inotify_init1
#define __NR_compat_ioprio_get		__NR_ioprio_get
#define __NR_compat_ioprio_set		__NR_ioprio_set
#define __NR_compat_ipc			__NR_ipc
#define __NR_compat_kcmp		__NR_kcmp
#define __NR_compat_keyctl		__NT_keyctl
#define __NR_compat_kill		__NR_kill
#define __NR_compat_link		__NR_link
#define __NR_compat_linkat		__NR_linkat
#define __NR_compat_mkdir		__NR_mkdir
#define __NR_compat_mkdirat		__NR_mkdirat
#define __NR_compat_mknodat		__NR_mknodat
#define __NR_compat_msgctl		__NR_msgctl
#define __NR_compat_name_to_handle_at	__NR_name_to_handle_at
#define __NR_compat_nfsservctl		__NR_nfsservctl
#define __NR_compat_open		__NR_open
#define __NR_compat_open_by_handle_at	__NR_open_by_handle_at
#define __NR_compat_openat		__NR_openat
#define __NR_compat_pipe2		__NR_pipe2
#define __NR_compat_pselect7		__NR_pselect7
#define __NR_compat_read		__NR_read
#define __NR_compat_readlink		__NR_readlink
#define __NR_compat_readlinkat		__NR_readlinkat
#define __NR_compat_renameat		__NR_renameat
#define __NR_compat_renameat2		__NR_renameat2
#define __NR_compat_request_key		__NR_request_key
#define __NR_compat_rmdir		__NR_rmdir
#define __NR_compat_rt_sigprocmask	__NR_rt_sigprocmask
#define __NR_compat_sendmmsg		__NR_sendmmsg
#define __NR_compat_shmctl		__NR_shmctl
#define __NR_compat_symlink		__NR_symlink
#define __NR_compat_symlinkat		__NR_symlinkat
#define __NR_compat_truncate		__NR_truncate
#define __NR_compat_umount2		__NR_umount2
#define __NR_compat_wait4		__NR_wait4
#define __NR_compat_write		__NR_write

#endif	/* __powerpc64__ || __s390x__ || __aarch64__ */

#if defined(__ia64__)

// On RHEL5 ia64, __NR_umount2 doesn't exist. So, define it in terms
// of __NR_umount.

#ifndef __NR_umount2
#define __NR_umount2 __NR_umount
#endif

#endif	/* __ia64__ */

#endif /* _COMPAT_UNISTD_H_ */
