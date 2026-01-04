#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    cout << x++;
    if (x <= 5)
        goto start;

    cout << "hee hee";
start:
    cout << "goto";
    return 0;
}