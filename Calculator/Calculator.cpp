#include "Calculator.h"

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{

    return a - b;
}

double multiply(double a, double b)
{

    return a * b;
}

double divide(double a, double b)
{

    if (b == 0)
    {
        cout << "Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

double factorial(int n)
{

    if (n < 0)
    {
        cout << "Factorial of negative numbers is not defined." << endl;
        return 0;
    }
    double result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

double GCD(int a, int b)
{

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

double LCM(int a, int b)
{

    return (a * b) / GCD(a, b);
}

double randomNumber(int min, int max)
{

    srand(time(0));
    return min + (rand() % (max - min + 1));
}
