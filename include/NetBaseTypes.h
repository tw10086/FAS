#ifndef NETBASETYPES_H
#define NETBASETYPES_H
#include <sys/epoll.h>
#include <sys/poll.h>

typedef struct epoll_event  Epoll_Event;
typedef struct pollfd  poll_Event;

typedef int Socket_t;

#endif // NETBASETYPES_H

