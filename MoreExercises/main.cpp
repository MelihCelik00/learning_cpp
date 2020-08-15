#include <iostream>

#define LOG(x) std::cout << x << std::endl

void IncrementPointer(int* value)
{
    (*value)++;
}

void IncrementByReference(int& value)
{
    value++;
}

int main() {
    LOG("----Pointers----");
    int var = 8;
    int* ptr = &var;
    *ptr = 10;

    char* buffer = new char[8];
    memset(buffer,0,8); // with size of char variables' pointer, memset sets that much memory size 0. Example for 8 digits -> 00 00 00 00 00 00 00 00

    char** ptr1 = &buffer; // stores pointer which stores another pointer that stores adress of buffer

    delete[] buffer; // deletes allocated memory that named buffer with a char pointer


    LOG("----References----");
    int a = 5;
    int& ref = a; // It's just a references, it's not a really variables and it can not be found in memory. It is a reference that told compiler to set new value for a
    ref = 2;
    LOG("a: " << a); // 2

    int b = 5;
    IncrementPointer(&b);
    LOG("b: " << b);

    int c = 5;
    IncrementByReference(c); // Cleaner method by using reference
    LOG("c: " << c);

    LOG("Another scenario: ");
    int alpha = 5;
    int beta = 8;

    int& ref2 = alpha;
    ref2 = beta;
    LOG("You will get by using these steps -> alpha: "<< alpha << " beta: " << beta); // alpha: 8, beta: 8.



    std::cin.get();
}
