#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int age;
    // std::cout << "Enter your age: ";
    // std::cin >> age;

    // if (age >= 18)
    // {
    //     std::cout << "You are eligible to vote." << std::endl;
    // }
    // else
    // {
    //     std::cout << "You are not eligible to vote." << std::endl;
    // }
    string teaOrder;

    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    if (teaOrder == "Green Tea")
    {
        cout << "It's a green tea." << endl;
        cout << "Your tea order is: " << teaOrder << endl;
    }
    else
    {
        cout << "Your tea order is: " << teaOrder << endl;
    }

    return 0;
}
