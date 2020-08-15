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
    Log("For Loop");

    for (int i = 0; i < 5; i++) {
        if(i % 2 == 0)
        {
            continue;
        }
        else if (i % 3 == 0)
        {
            break;
        }
        else if (i % 5 == 0)
        {
            return 0;
        }
        Log("Hello World!");
        std::cout << i << std::endl;
    }

    int x = 0;

    Log("--------------------------");
    Log("While Loop");
    while(x<5)
    {
        std::cout << x << std::endl;
        x++;

    }

    Log("--------------------------");

    std::cin.get();
}