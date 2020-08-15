#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {
    int var = 8;
    int* ptr = &var;
    *ptr = 10;

    char* buffer = new char[8];
    memset(buffer,0,8); // with size of char variables' pointer, memset sets that much memory size 0. Example for 8 digits -> 00 00 00 00 00 00 00 00

    char** ptr1 = &buffer; // stores pointer which stores another pointer that stores adress of buffer

    delete[] buffer; // deletes allocated memory that named buffer with a char pointer


    std::cin.get();
}
