#include <iostream>
#include <thread>

using namespace std;

int number = 0;

void increment() {
    for(int i = 0; i < 100000; i++) {
        number++;
    }
}

int main() {
    thread t1(increment);

    thread t2(increment);

    t1.join();
    t2.join();

    cout << "Number after exectution of t1 and t2 is: " << number;

    return 0;
}