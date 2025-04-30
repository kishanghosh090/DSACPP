#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    // data members (attributes)
    string teaName;
    int serveing;
    vector<string> ingredients;

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
    Chai myChai;
    myChai.teaName = "Green Tea";
    myChai.serveing = 5;
    myChai.ingredients.push_back("Tea Leaves");
    myChai.ingredients.push_back("Water");
    myChai.displayChaiDetails();

    return 0;
}