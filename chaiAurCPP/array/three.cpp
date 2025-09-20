#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
}

int *prepareChaiOrders(int cups)
{
    int *orders = new int[cups];

    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main()
{
    int chais[5] = {1, 2, 3, 4, 6};

    int cups = 5;
    int *a = prepareChaiOrders(cups);
    for (int i = 0; i < cups; i++)
    {
        cout << a[i] << endl;
    }
    delete[] a;
    return 0;
}