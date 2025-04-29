#include <iostream>
using namespace std;

// fun defination
int checkTeam(int param) // parameter
{
    return param;
}

void increment(int &param)
{
    param++;
}
int main()
{
    // lamda function
    auto chai = []()
    {
        cout << "Chai" << endl;
    };
    cout << checkTeam(5) << "\n"; // call by value
    int age = 19;
    increment(age);
    cout << age << endl;
    // chai();
    return 0;
}
