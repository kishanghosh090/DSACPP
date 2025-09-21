#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double iniBalance)
    {
        accNum = accountNumber;
        balance = iniBalance;
    }

    // getter
    double getBalance() const
    {
        return balance;
    }
    // deposite money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout
                << "Depodited amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid";
        }
    }
    // withdraw
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid withdrawn amount" << endl;
        }
    }
};

int main()
{
    return 0;
}