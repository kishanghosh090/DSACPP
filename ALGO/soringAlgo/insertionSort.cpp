#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        // 1, 54, 23, 56, 123, 656, 12, 23, -1
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int main()
{
    vector<int> vec = {1, 54, 23, 56, 123, 656, 12, 23, -1};
    vector<int> vec = insertionSort(vec);
}