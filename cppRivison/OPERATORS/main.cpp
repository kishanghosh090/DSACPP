#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;

    // 1️⃣ Arithmetic Operators
    cout << a + b << endl; // 13
    cout << a - b << endl; // 7
    cout << a * b << endl; // 30
    cout << a / b << endl; // 3 (integer division)
    cout << a % b << endl; // 1

    bool x = true, y = false;

    cout << (x && y) << endl; // AND
    cout << (x || y) << endl; // OR
    cout << (!x) << endl;     // NOT

    int a = 10;
    a += 5; // a = a + 5
    a -= 3;
    a *= 2;
    a /= 4;

    int a = 5;

    cout << ++a << endl; // pre-increment → 6
    cout << a++ << endl; // post-increment → 6 (prints first)

    int a = 5, b = 3;

    cout << (a & b) << endl;  // AND
    cout << (a | b) << endl;  // OR
    cout << (a ^ b) << endl;  // XOR
    cout << (a << 1) << endl; // Left shift
    cout << (a >> 1) << endl; // Right shift

    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    return 0;
}
