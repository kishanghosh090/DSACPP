#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int *p = new int;
    *p = 10;

    cout << *p;

    delete p;    // free memory
    p = nullptr; // GOOD PRACTICE

    int n = 5;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = i * 10;

    delete[] arr; // IMPORTANT

    unique_ptr<int> p1 = make_unique<int>(10);

    return 0;
}
