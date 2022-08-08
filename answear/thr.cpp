#include "thr.h"

thr::thr(QWidget *parent) : QThread(parent)
{

}

void thr::run()
{
    int num=1;
    while (num<100) {
        emit curnum(num++);
QThread::currentThread();

    }
}
