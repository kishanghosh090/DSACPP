#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int serving;

public:
    Chai(string name, int serve) : teaName(name), serving(serve) {}

    friend bool compareServings(const Chai &chai1, Chai &chai2);
    void display() const
    {
        cout << teaName << endl;
        cout << serving << endl;
    }
};

bool compareServings(const Chai &chai1, Chai &chai2)
{
    return chai1.serving > chai2.serving;
}
int main()
{
    Chai masalaChai("masala chai", 5);
    Chai ginger("ginger chai", 8);

    masalaChai.display();
    ginger.display();

    if (compareServings(masalaChai, ginger))
    {
        cout << "masala chai has more serving" << endl;
    }
    else
    {
        cout << "ginger chai has more serving" << endl;
    }
}