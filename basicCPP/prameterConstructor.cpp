#include <iostream>
#include <vector>

using namespace std;

// parameter constructor---
class Chai
{
public:
    string teaName;
    int serveing;
    vector<string> ingredients;

    Chai(string teaName, int serveing, vector<string> ingredients)
    {
        this->teaName = teaName;
        this->serveing = serveing;
        this->ingredients = ingredients;
        cout << "Chai constructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Serveing: " << serveing << endl;
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
    Chai lemonTea("lemon tea", 5, {"lemon", "water", "sugar"});
    // lemonTea.displayChaiDetails();
    return 0;
}