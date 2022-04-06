#include "MyPThread.h"

MyPThread::MyPThread() {

}

void MyPThread::start() {
    pthread_create(&m_thread, &thread_attr, &run, NULL);
}

void MyPThread::join() {
    m_thread.join();
}