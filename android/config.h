/*
 * Android build config for libusb
 * Copyright © 2012-2013 RealVNC Ltd. <toby.gray@realvnc.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/* Define to 1 to start with debug message logging enabled. */
/* #undef ENABLE_DEBUG_LOGGING */

/* Message logging */
#define ENABLE_LOGGING 1

/* Define to 1 if you want to use Java enumeration */
#define JAVA_ENUMERATION 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Linux backend */
#define OS_LINUX 1

/* Enable output to system log */
#define USE_SYSTEM_LOGGING_FACILITY 1

/* type of second poll() argument */
#define POLL_NFDS_TYPE nfds_t

/* Use POSIX Threads */
#define THREADS_POSIX 1

/* Default visibility */
#define DEFAULT_VISIBILITY __attribute__((visibility("default")))

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <linux/filter.h> header file. */
#define HAVE_LINUX_FILTER_H 1

/* Define to 1 if you have the <linux/netlink.h> header file. */
#define HAVE_LINUX_NETLINK_H 1

/* Define to 1 if you have the <asm/types.h> header file. */
#define HAVE_ASM_TYPES_H 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if the system has the type `nfds_t'. */
#define HAVE_NFDS_T 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if using the POSIX poll() implementation. */
#define POLL_POSIX 1

/* Define to 1 if using POSIX threads. */
#define THREADS_POSIX 1

/* Define to 1 to output logging messages to the systemwide log. */
#define USE_SYSTEM_LOGGING_FACILITY 1

/* Enable GNU extensions. */
#define _GNU_SOURCE 1
