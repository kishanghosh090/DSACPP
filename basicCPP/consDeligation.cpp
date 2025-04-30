#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // main constructor
    Chai(string teaName, int serve, vector<string> ingr)
    {
        this->teaName = teaName;
        serving = serve;
        ingredients = ingr;
        cout << "main constructor called" << endl;
    }

    // deligation constructor
    Chai(string name) : Chai(name, 1, {"water", "tea leaves"}) {}
    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Serving: " << serving << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{

    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();
    return 0;
}