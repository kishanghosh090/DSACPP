// variables and constants in c++

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    int c = a + b;
    cout << c;

    const int x = 5;
    // x = 6; // this will throw an error
    cout << x;
    bool y = true;
    cout << "True" << y;
    return 0;
}
