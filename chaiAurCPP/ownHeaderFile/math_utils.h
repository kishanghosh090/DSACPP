// math_utils.h
#ifndef MATH_UTILS_H
#define MATH_UTILS_H
#include <iostream>

namespace math
{
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    double divi(int a, int b);
    void printResult(const std::string &label, double value);
}

#endif
