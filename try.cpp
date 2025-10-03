#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 5, 2, 4, 4};
    int maxi = nums[0];
    for (int i : nums)
    {
        if (i > maxi)
        {
            maxi = i;
        }
    }
    cout << nums[0];

    int *arr = new int[maxi]();

    for (int i : nums)
    {
        arr[i] += 1;
    }

    for (int i = 0; i <= maxi; i++)
    {
        if (arr[i] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}