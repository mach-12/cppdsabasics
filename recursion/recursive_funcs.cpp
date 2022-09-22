#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return n;
    }

    return n * factorial(n-1);
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    // fib(5) = fib(4) + fib(3)
    return fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
    cout << factorial(5) << endl;
    cout << fibonacci(5) << endl;
    return 0;
}