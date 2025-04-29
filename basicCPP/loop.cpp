#include <iostream>
using namespace std;
int main()
{
    // int i = 1;
    // while (i <= 10)
    // {
    // cout << i << endl;
    // i++;
    // }

    // string array loop

    string colors[4] = {"Red", "Green", "Blue"};

    // add new color
    // colors[3] = "Yellow";
    for (int i = 0; i < sizeof(colors) / sizeof(colors[0]); i++)
    {
        cout << colors[i] << endl;
    }

    string response;
    do
    {
        cout << "Do You Want more Tea???";
        cin >> response;

        if (response == "nooo")
        {
            cout << "Break statement executed";
            break;
        }

    } while (response == "yes");
    return 0;
}