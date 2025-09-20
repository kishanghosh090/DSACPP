#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredientes;

    // parameterized constructor
    Chai(string tea, int serve, vector<string> ing)
    {
        teaName = tea;
        servings = serve;
        ingredientes = ing;

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
    Chai c1("elychi tea", 2, {"milk", "elychi"}); // constructor called here
    c1.displayChaiDetails();

    return 0;
}