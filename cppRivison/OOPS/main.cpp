#include <iostream>
using namespace std;

class Test
{
    int x;
    int *p;

public:
    Test(int a)
    {
        x = a;
    }
    // default copy constructor (shallow)
    // ➡ Both objects point to same memory
    // Test(const Test &t)
    // {
    //     x = t.x;
    //     cout << "Copy constructor called\n";
    // }

    Test(const Test &t)
    {
        p = new int(*t.p); // deep copy
        x = t.x;
        cout << "Deep Copy constructor called\n";
    }
};

int main()
{
    Test t1(10);
    Test t2 = t1; // copy constructor // ➡ Both objects point to same memory
}
