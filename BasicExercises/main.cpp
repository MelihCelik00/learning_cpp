#include <iostream>


void Log(const char* message);
int Multiply(int a, int b);

int main() {
    Log("Hi guys bro!");

    std::cout << Multiply(5,3) << std::endl;
    std::cin.get();

}
