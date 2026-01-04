#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int, int);

// Function definition
int add(int a, int b)
{
    return a + b;
}
// call by reference
void change(int &x)
{
    x = 10;
}

// compiler treat it like this -> int y = 5 * 5;

inline int square(int x)
{
    return x * x;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int sum(int a, int b = 5)
{
    return a + b;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << sum(10);     // 15
    cout << sum(10, 20); // 30
}
