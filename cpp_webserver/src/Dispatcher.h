#pragma once
#include "EventLoop.h"
#include "Channel.h"
#include <string>
using namespace std;

class EventLoop;
class Dispatcher {
public:
    Dispatcher(EventLoop* evloop);
    virtual ~Dispatcher();
    virtual int add() = 0;  //添加
    virtual int remove() = 0;   //删除
    virtual int modify()= 0;    //修改
    virtual int dispatch(int timeout = 2) = 0;  //事件监测:s
    inline void setChannel(Channel* channel) {
        m_channel = channel;
    }
protected:
    string m_name = string();
    Channel* m_channel;
    EventLoop* m_evLoop;
};