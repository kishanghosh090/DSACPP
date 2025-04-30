#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int serveing;
    vector<string> ingredients;

    // default constructor
    Chai()
    {
        cout << "Default constructor called" << endl;
        teaName = "Unknown tea";
        serveing = 0;
        ingredients = {"Unknown ingredients"};
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Serveing: " << serveing << endl;
        cout << "Ingredients: ";

        // also you can use .size() method to get the size of the vector

        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai masalaChai;
    masalaChai.displayChaiDetails();
    return 0;
}