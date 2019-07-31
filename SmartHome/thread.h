#ifndef THREAD_H
#define THREAD_H
#include <QThread>
#include <iostream>
#include <functional>
#include "mainmenu.h"
class Thread : public QThread{
public:
    Thread(std::function<void()> func)
        :isShutDown_(false)
        ,func_(func)
    {}

    void run(){
        while(!isShutDown_)
         func_();
    }

    void shutDown(){
        isShutDown_ = true;
    }
private:
    volatile bool isShutDown_;
    std::function<void()> func_;
};
#endif // THREAD_H
