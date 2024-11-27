#include <iostream>
#include <thread>

int sharedVariable = 0;

void increment() {
    for (int i = 0; i < 1000; ++i) {
        ++sharedVariable;
    }
}

void raceCondition() {
    std::thread t1(increment);
    std::thread t2(increment);
    t1.join();
    t2.join();
    std::cout << "Shared Variable: " << sharedVariable << std::endl;
}
