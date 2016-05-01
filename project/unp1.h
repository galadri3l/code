#ifndef __unp_h
#define __unp_h
#include	"..config.h"
#include	<sys/types.h>
#include	<sys/socket.h>
#include	<sys/time.h>
#include	<time.h>
#include	<netinet/in.h>
#include	<arpa/inet.h>
#include	<errno.h>
#include	<fcntl.h>
#include	<netdb.h>
#include	<signal.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<sys/stat.h>
#include	<sys/uio.h>
#include	<unistd.h>
#include	<sys/wait.h>
#include	<sys/un.h>
#ifdef HAVE_SYS_SELECT_H
#include	<sys/select.h>
#endif

#ifdef HAVE_SYS_SYSCTL_H
#include	<sys/sysctl.h>
#endif

#ifdef HAVE_POLL_H
#include	<poll.h>
#endif

#ifdef HAVE_SYS_EVENT_H
#include	<sys/event.h>
#endif

#ifdef HAVE_STRINGS_H
#include	<strings.h>
#endif

#ifdef	HAVE_SYS_IOCTL_h
#include	<ioctl.h>
#endif

#ifdef HAVE_SYS_FILIO_H
#include	<sys/filio.h>
#endif

#ifdef HAVE_SYS_SOCKIO_H
#include	<sys/sockio.h>
#endif

#ifdef HAVE_PTHREAD_H
#include	<pthread.h>
#endif

#ifdef HAVE_NET_IF_DL_H
#include	<net/if_dl.h>
#endif

#ifdef HAVE_NETINET_SCTP_H
#include	<netinet/sctp.h>
#endif

#ifdef __osf__
#undef recv
#undef send
#define recv(a,b,c,d)	recv(a,b,c,d,0,0)
#endif

#ifndef INADDR_NONE
#define INADDR_NONE   0xffffffff
#endif

#ifndef SHUT_RD
#define SHUT_RD		0
#define SHUT_WR		1
#define SHUT_RDWR	2
#endif

#ifndef INET_ADDRSTRLEN
#define	INET_ADDRSTRLEN		16
#endif

#ifndef INET6_ADDRSTRLEN
#define INET6_ADDRSTRLEN	46
#endif

#ifndef HAVE_BZERO
#define bzero(ptr,n)
#endif

