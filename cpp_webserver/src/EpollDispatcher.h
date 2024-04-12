#pragma once
#include "Dispatcher.h"
#include "EventLoop.h"
#include "Channel.h"
#include <sys/epoll.h>
using namespace std;

class EpollDispatcher: public Dispatcher {
public:
    EpollDispatcher(EventLoop* evloop);
    ~EpollDispatcher();
    int add() override;     //添加
    int remove() override;  //删除
    int modify() override;  //修改
    int dispatch(int timeout = 2) override;  //事件监测

private:
    int epollCtl(int op);

private:
    int m_epfd;
    struct epoll_event* m_events;
    const int m_maxNode = 520;
};