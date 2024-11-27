#include <iostream>

void nullPointer() {
    int* ptr = nullptr;
    std::cout << *ptr << std::endl;
}

int main() {
    nullPointer();
    return 0;
}
