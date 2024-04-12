#include "Dispatcher.h"
#include "EventLoop.h"

Dispatcher::Dispatcher(EventLoop* evloop): m_evLoop(evloop){}
Dispatcher::~Dispatcher(){}