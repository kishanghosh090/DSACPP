#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int serveing;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown tea";
        serveing = 0;
        ingredients = {"Unknown ingredients"};
        cout << "Chai constructor called" << endl;
    }
    Chai(string teaName, int serveing, vector<string> ingredients)
    {
        this->teaName = teaName;
        this->serveing = serveing;
        this->ingredients = ingredients;
        cout << "Chai constructor called" << endl;
    }

    // getters and setters for teaName
    string getTeaName()
    {
        return teaName;
    }
    string setTeaName(string teaName)
    {
        // logic
        this->teaName = teaName;
    }

    // getters and setters for serveing
    int getServeing()
    {
        return serveing;
    }
    void setServeing(int serveing)
    {
        // logic
        this->serveing = serveing;
    }

    // getters and setters for ingredients
    vector<string> getIngredients()
    {
        return this->ingredients;
    }
    vector<string> setIngredients(vector<string> ingredients)
    {
        // logic
        this->ingredients = ingredients;
    }
};

int main()
{
    Chai chai("Green Tea", 2, {"Tea Leaves", "Water"});
    chai.setTeaName("lemon tea");

    cout << chai.getTeaName() << endl;
    return 0;
}