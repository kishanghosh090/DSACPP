#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    int i = 1;
    // for (int i = 0; i < 1000000000000000; i++)
    // {

    // }
    while (true)
    {
        v.push_back(i * 22);
        cout << i * 2;
        i++;
    }
}