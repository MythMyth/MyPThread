#include<pthread.h>

class MyPThread {
    public:
    MyPThread();
    virtual run() {}
    void start();
    void end();
    private:
    pthread_t *thread;
}