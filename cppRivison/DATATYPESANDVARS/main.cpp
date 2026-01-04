#include <iostream>
using namespace std;
int main()
{
    double x = 10.75;
    float f = 12.3;
    int y = (int)x;              // C-style
    int z = static_cast<int>(x); // C++ style
    cout << sizeof(y) << "\n";
}