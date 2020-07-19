//
// Created by Melih Safa Celik on 19.07.2020.
//
#include <iostream>
#include "Log.h"

int Multiply(int a, int b);
int Sum(int a, int b);

void InitialiseLog()
{
    Log("Log Initialised!");
}

void MultiplyAndLog(int a, int b)
{
    std::cout << Multiply(a,b) << std::endl;
}

void SumAndLog(int a, int b)
{
    std::cout << Sum(a,b) << std::endl;
}