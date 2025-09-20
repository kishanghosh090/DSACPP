#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string *teaName;
    int servings;
    vector<string> ingredientes;

    // copy constructor ---------------------------
    Chai(string tea, int serve, vector<string> ing)
    {
        teaName = new string(tea);
        servings = serve;
        ingredientes = ing;

        cout << "cons called" << endl;
    }
    ~Chai()
    {
        delete teaName;
        cout << "destructor called";
    }

    // it is called when we copy the object
    Chai(Chai &other)
    {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredientes = other.ingredientes;
        cout << "copy constructor called";
    }

    void displayChaiDetails()
    {
        cout << "Tea Name " << *teaName << endl;
        cout << "Tea servings " << servings << endl;
        for (string i : ingredientes)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    Chai elychiTea("elychi tea", 2, {"milk", "elychi"}); // constructor called here
    elychiTea.displayChaiDetails();

    // copy the objects

    Chai copiedChai = elychiTea;

    *copiedChai.teaName = "lemon tea";

    elychiTea.displayChaiDetails();
    copiedChai.displayChaiDetails();

    return 0;
}