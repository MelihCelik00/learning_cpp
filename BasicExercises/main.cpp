#include <iostream>
#include "Log.h"

int Multiply(int a, int b);
void InitialiseLog();

int main() {
    Log("Hi guys bro!");
    InitialiseLog();

    std::cout << Multiply(5,3) << std::endl;
    std::cin.get();

}
