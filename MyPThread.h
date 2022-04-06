#include<pthread.h>

class MyPThread {
    public:
    MyPThread();
    virtual run() {}
    void start();
    void join();
    private:
    pthread_t m_thread;
    pthread_attr_t thread_attr;

}