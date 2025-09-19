#include <iostream>
using namespace std;

int main()
{
    int teaLeaves = 50;
    float temp = 85.55;
    double price = 199.999;

    string teaName;
    getline(cin, teaName);
    int teaQuantity;
    cin >> teaQuantity;
    cout << "Your tea " << teaName << ". Tea " << teaQuantity << " is ready.";

    return 0;
}