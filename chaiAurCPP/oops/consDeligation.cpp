#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    // deligating constructor
    Chai(string name) : Chai(name, 1, {"water,leaves"}) {}

    // main constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }
};

int main()
{
    Chai quickChai("quick chai", 3, {"elychi"});
    return 0;
}