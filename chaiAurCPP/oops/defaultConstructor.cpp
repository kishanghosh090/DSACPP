#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredientes;

    // default constructor
    Chai()
    {
        teaName = "Unknown Tea";
        servings = 2;
        ingredientes = {"milk", "elychi"};

        cout << "cons called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name " << teaName << endl;
        cout << "Tea servings " << servings << endl;
        for (string i : ingredientes)
        {
            cout << i << endl;
        }
    }
};
int main()
{
    Chai c1; // constructor called here
    c1.displayChaiDetails();

    return 0;
}