#include <iostream>
using namespace std;

class A
{
public:
    A() { cout << "A\n"; }
    ~A() { cout << "~A\n"; }
};

class B
{
    A a;

public:
    B() { cout << "B\n"; }
    ~B() { cout << "~B\n"; }
};
