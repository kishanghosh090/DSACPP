#include <iostream> // pre processor directive starts with #
#include <string>

#define PI 3.14; // pre processor directive

namespace myChai
{
    void cout()
    {
        std::cout << "Chai" << std::endl;
    }
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << PI;

    myChai::cout();
    return 0;
}

int kishan()
{
    try
    {
        std::cout << "Kishan" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}