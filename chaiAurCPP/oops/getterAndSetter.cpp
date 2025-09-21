#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown tea";
        servings = 1;
        ingredients = {"water", "leaves"};
    }

    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }

    // getter
    string getTeaName()
    {
        return teaName;
    }

    // setter
    void setTeaName(string name)
    {
        // logic
        teaName = name;
    }

    // getter and setter for servigns
    int getServings()
    {
        return servings;
    }
    void setServings(int serve)
    {
        servings = serve;
    }

    // getter for ingre
    vector<string> getIngredients()
    {
        return ingredients;
    }

    // setter for ingre
    void setIngredients(vector<string> ingre)
    {
        ingredients = ingre;
    }

    // print all
    void displayChaiDetails()
    {
        cout << "Tea Name " << teaName << endl;
        cout << "Tea servings " << servings << endl;
        for (string i : ingredients)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    Chai elychiTea;
    // elychiTea.getTeaName();


    elychiTea.setTeaName("elychi tea");
    elychiTea.displayChaiDetails();

    return 0;
}