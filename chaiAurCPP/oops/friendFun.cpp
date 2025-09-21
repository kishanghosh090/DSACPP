#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai
{

private:
    string teaName;
    int servings;

public:
    Chai(string name, int serve) : teaName(name), servings(serve) {}
    friend bool compareServings(const Chai &chai1, const Chai &chai2);

    void display() const
    {
        cout << "Tea Name " << teaName << endl;
        cout << "Tea servings " << servings << endl;
    }
};

bool compareServings(const Chai &chai1, const Chai &chai2)
{
    return chai1.servings > chai2.servings;
}

int main()
{
    Chai masalaChai("Elychi", 4);
    Chai ginger("Ginger", 2);

    masalaChai.display();
    ginger.display();

    // compare no of servings of two type of teas
    if (compareServings(masalaChai, ginger))
    {
        cout << "Ahhh!! You Like Elychi tea more than ginger tea" << endl;
    }
    else
    {
        cout << "Ahhh!! You Like ginger tea more than Elychi tea" << endl;
    }

    return 0;
}