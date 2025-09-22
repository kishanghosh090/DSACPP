#include <iostream>
#include <cmath>
namespace myChai
{
    void print(char *arr)
    {
        std::cout << arr;
    }
}

int main()
{
    int x = 10;
    if (x < 0)
    {
        return false;
    }

    if (x < 100)
    {
        if (x / 11 == x % 10)
        {
            std::cout << true;
        }
        else
        {
            std::cout << false;
        }
    }

    int temp = x;
    int palNum = 0;
    int i = 0;
    while (temp > 0)
    {
        int r = temp % 10;
        std::cout << r << std::endl;
        palNum = (pow(10, i) * r) + palNum;
        temp = temp / 10;
        i++;
    }
    // std::cout << palNum << "  " << x;
    if (x == palNum)
    {
        std::cout << true;
    }
    else
    {
        std::cout << false;
    }
}

int Main()
{
    return 0;
}