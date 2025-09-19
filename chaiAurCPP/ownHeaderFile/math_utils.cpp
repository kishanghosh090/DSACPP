// math_utils.cpp
#include "math_utils.h"
#include <iostream>

namespace math
{
    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }

    int mul(int a, int b)
    {
        return a * b;
    }

    double divi(int a, int b)
    {
        if (b == 0)
        {
            std::cerr << "Error: Division by zero!\n";
            return 0;
        }
        return static_cast<double>(a) / b;
    }

    void printResult(const std::string &label, double value)
    {
        std::cout << label << ": " << value << std::endl;
    }
}
