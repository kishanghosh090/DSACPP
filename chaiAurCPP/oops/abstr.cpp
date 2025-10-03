#include <iostream>

using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() = 0; // pure virtual function // abstruct class (Tea)

    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived class GreenTea is derived from Tea class
class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready" << endl;
    }
    void brew() override
    {
        cout << "Green tea Brewed" << endl;
    }
    void serve() override
    {
        cout << "Green Tea Served" << endl;
    }
};

int main()
{

    return 0;
}