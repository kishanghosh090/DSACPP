#include <iostream>
#include <vector>
using namespace std;

// copy constructor
class Chai
{
public:
    string *teaName;
    int serveing;
    vector<string> ingredients;
    Chai(string teaName, int serveing, vector<string> ingredients)
    {
        this->teaName = new string(teaName);

        this->serveing = serveing;
        this->ingredients = ingredients;
        cout << "Chai constructor called" << endl;
    }

    // copy constructor --------------------------------------=-=-=-
    Chai(const Chai &other) // deep copy(memory copy)
    {
        this->teaName = new string(*other.teaName);
        this->serveing = other.serveing;
        this->ingredients = other.ingredients;
        cout << "Chai copy constructor called" << endl;
    }

    ~Chai()
    {
        delete teaName;
        cout << "Chai destructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << *teaName << endl;
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
    Chai chai1("Green Tea", 2, {"Tea Leaves", "Water"});
    chai1.displayChaiDetails();

    // Chai CopiedChai(chai1);
    Chai CopiedChai = chai1; // after this destructor will be called
    CopiedChai.displayChaiDetails();

    *chai1.teaName = "modified lemon tea";

    CopiedChai.displayChaiDetails();

    return 0;
}
