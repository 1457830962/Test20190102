#include<iostream>
#include <thread>
#include <mutex>
using namespace std;

volatile int val;
mutex mut;

void icrement () {
    for (int i = 0; i < 100000000; i++) {
        mut.lock ();
        val++;
        mut.unlock ();
    }
}

int main()
{
    //创建两个线程
        thread t1 (icrement);
        thread t2 (icrement);
        //等待两个线程执行完
        t1.join ();
        t2.join ();
        cout << val << endl;

    return 0;
}
