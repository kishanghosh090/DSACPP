#include <iostream>
#include <vector>
using namespace std;

class Chai
{
    // data members (attributes)
private:
    string teaName;
    int servings;
    vector<string> ingredientes;

    // Member function
public:
    Chai();
    ~Chai();
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
Chai::Chai() {}
Chai::~Chai() {}

int main()
{
    Chai myChai;

    return 0;
}