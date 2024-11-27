#include <iostream>

void memoryLeak() {
    int* leak = new int[100];
    leak[0] = 42;
}
