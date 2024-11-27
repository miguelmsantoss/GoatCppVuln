#include <iostream>
#include <cstring>

void bufferOverflow() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow");
    std::cout << buffer << std::endl;
}

int main() {
    bufferOverflow();
    return 0;
}
