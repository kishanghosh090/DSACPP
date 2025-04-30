#include <iostream>

using namespace std;

int totalChaiServed(int chaiServed[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chaiServed[i];
    }
    return total;
}

int *prepareChaiOrder(int cups)
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
    int chaiTemp[5] = {85, 86, 87, 88, 89};

    // chaiTemp[0] = 85;
    // chaiTemp[1] = 86;
    // chaiTemp[2] = 87;
    // chaiTemp[3] = 88;
    // chaiTemp[4] = 89;

    // for (int temp : chaiTemp)
    // {
    //     cout << temp << endl;
    // }

    // for (int i = 0; i < sizeof(chaiTemp) / sizeof(chaiTemp[0]); i++)
    // {
    //     cout << chaiTemp[i] << endl;
    // }

    int chaiServed[7] = {};
    chaiServed[0] = 5;
    chaiServed[1] = 6;
    chaiServed[2] = 7;
    chaiServed[3] = 8;
    chaiServed[4] = 9;
    chaiServed[5] = 10;
    chaiServed[6] = 11;

    // cout << "Total chai served:-> " << totalChaiServed(chaiServed, 7) << endl;

    // get array from function (*,&) -> ----------

    int orders = 10;
    int *order = prepareChaiOrder(orders);
    // for (int i = 0; i < orders; i++)
    // {
    // cout << order[i] << endl;
    // }

    delete[] order;
    cout << "Dynamic Array deleted successfully" << endl;

    // 2D Array ------ ----- ---- -- - - -- -- - - -- - - - ---
    int chai[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << chai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}