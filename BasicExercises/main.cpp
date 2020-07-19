#include <iostream>
#include "Log.h"

int Multiply(int a, int b);
int Sum(int x, int y);

void InitialiseLog();
void MultiplyAndLog(int k, int m);
void SumAndLog(int u, int v);

int main() {
    Log("Hi guys bro!");
    InitialiseLog();
    // Following two rows makes same job!! Write code always cleaner!!!!
    //std::cout << Multiply(3,5) << std::endl;
    MultiplyAndLog(3,5);

    std::cout << "Sum: "; // Following two rows makes same job bro, just get it...
    std::cout << Sum(3,5) << std::endl;
    SumAndLog(3,5);

    std::cin.get();
}