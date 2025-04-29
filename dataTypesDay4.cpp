#include <iostream>
using namespace std;
int main()
{
    int teaLeaves = 56;
    float price = 3.50;
    double total = teaLeaves * price;
    cout << total << endl;
    char teaGrade = 'A';
    cout << teaGrade << endl;
    bool isAvailable = true;
    cout << isAvailable << endl;

    unsigned int a = 5; // unsigned int is a positive number
    signed int b = -5;  // signed int is a negative number
    cout << a << endl;
    cout << b << endl;

    string name = "Kishan";
    cout << name << endl;

    // input from user
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    // input string
    string myName;
    cout << "Enter Your Name";
    // getline(cin, myName);
    cin >> myName;
    cout << myName << endl;

    return 0;
}