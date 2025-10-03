#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<char, int> m1 = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};
    // cout << m1.at("I");
    string s = "kishan";
    for (char i : s)
    {
        cout << m1[i];
    }
    return 0;
}