#include<iostream>
#include "MyPThread.h"
#include <thread>
#include <chrono>

using namespace std;

class Test: public MyPThread{
    public:
    void run() {
        // cout << "Thread start \n";
        // for(int i = 0; i < 30; i++) {
        //     cout << i + 1 << "\n";
        //     this_thread::sleep_for(chrono::milliseconds(500));
        // }
    }
};

int main() {
    cout << "??\n";
    MyPThread test;
    test.start();

    for(int i = 0; i < 30; i++) {
        cout << i + 1 << "\n";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    test.join();
    return 0;
}