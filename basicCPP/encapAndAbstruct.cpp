#include <iostream>
#include <string>

// encapsulation and Abstract---------------------
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string account, double initialBalance)
    {
        accountNumber = account;
        balance = initialBalance;
    }

    // getter
    double getBalance ()
    {
        return balance;
    }

    // Method to deposit money

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew $" << amount << endl;
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
};

int main()
{
    BankAccount account1("123456789", 1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);
    cout << "Current balance: $" << account1.getBalance() << endl;

    return 0;
}