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

    Log("--------------------------");
    int a = 8;
    std::cout << a++ << std::endl; // first makes operation on variable than increases it
    std::cout << ++a << std::endl; // first increase than operate
    Log("--------------------------");

    Log("IF ELSE Examples");
    bool boolean = true;

    for (int i = 0; i < 2; i++)
    {
        if (boolean)
        {
            Log("Boolean is true");
            boolean = false;
        }
        else
            Log("Boolean is false");
    }
    Log("--------------------------");
    Log("For and While Loops");

    for (int i = 0; i < 5; i++) {
        Log("Hello World!");
    }

    int x = 0;

    while(x<5)
    {
        std::cout << x << std::endl;
        x++;

    }

    Log("--------------------------");

    std::cin.get();
}