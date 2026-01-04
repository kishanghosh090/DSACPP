#include <iostream>
using namespace std;

// int main() {
//     int x = 10;
//     int* p = &x;

//     cout << x << endl;   // value
//     cout << &x << endl;  // address
//     cout << p << endl;   // address
//     cout << *p << endl;  // value using pointer

//     return 0;
// }

int main()
{
    //     int arr[3] = {10, 20, 30};
    //     int *p = arr;

    //     cout << *p << endl;       // 10
    //     cout << *(p + 1) << endl; // 20
    //     cout << *(p + 2) << endl; // 30

    // int x = 5;
    // int *p = &x;
    // int **pp = &p;

    // cout << **pp; // 5
    int *p;
    {
        int x = 10;
        p = &x;
    }
    // x destroyed here
    cout << *p; // ❌ dangling pointer
}
