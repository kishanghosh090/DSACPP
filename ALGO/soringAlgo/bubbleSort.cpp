// 1,2,3,4,5,6,78,987,8875 ---> incrasing or decresing order

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printVector(vector<T> &vac)
{
    for (T el : vac)
    {
        cout << el << " ";
    }
    < cout << "\n";
}

vector<int> bubbleSort(vector<int> bubble)
{
    for (int i = 0; i < bubble.size(); i++)
    {
        for (int j = i + 1; j < bubble.size(); j++)
        {
            if (bubble[i] > bubble[j])
            {
                swap(bubble[i], bubble[j]);
            }
        }
    }
}
int main()
{
    vector<int> vec = {23, 223, 454, 221, 56, 222, 564, 231, 3434, 1222};

    vector<int> bubble = bubbleSort(vec);

    printVector(bubble);
}