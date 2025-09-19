// main.cpp
#include <iostream>
#include "math_utils.h" // include our own header

int main()
{
    int a = 10, b = 5;

    math::printResult("Add", math::add(a, b));
    math::printResult("Sub", math::sub(a, b));
    math::printResult("Mul", math::mul(a, b));
    math::printResult("Div", math::divi(a, b));

    return 0;
}
