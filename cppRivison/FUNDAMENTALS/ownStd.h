#ifndef OWNSTD_H
#define OWNSTD_H
#include <iostream>

namespace ownStd
{
    class Cout
    {
    public:
        template <typename T>
        Cout &operator<<(const T &value)
        {
            std::cout << value;
            return *this;
        }
    };
    class Cin
    {
    public:
        template <typename T>
        Cin &operator>>(T &value)
        {
            std::cin >> value;
            return *this;
        }
    };
    extern Cout cout;
    extern Cin cin;
}
#endif
