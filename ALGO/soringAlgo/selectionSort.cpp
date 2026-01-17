#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename G>
void printArray(vector<G> vec)
{
    for (G el : vec)
    {
        cout << el << "  ";
    }
    cout << "\n";
}

vector<int> selectionSort(vector<int> v)
{
    vector<int> vec = v;
    for (int i = 0; i < vec.size(); i++)
    {
        int minIdx = i;

        for (int j = i; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIdx])
            {
                minIdx = j;
            }
        }
        swap(vec[i], vec[minIdx]);
    }
    return vec;
}

int main()
{
    vector<int> vec = {45, 32, 555, 22, 1, -1, 34, 32, -3};

    vector<int> selectionArray = selectionSort(vec);

    printArray(selectionArray);

    return 0;
}