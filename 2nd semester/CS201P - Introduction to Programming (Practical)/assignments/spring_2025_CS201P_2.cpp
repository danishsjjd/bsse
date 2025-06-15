#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Parameterized constructor
    BankAccount(string name, string accNumber, double initialBalance)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;

        cout << "Account Created Successfully!" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number (VUID): " << accountNumber << endl;
        cout << "Initial Balance: " << balance << endl;
        cout << endl;
    }

    // Deposit function
    void deposit(double amount)
    {
        cout << "Depositing amount: " << amount << endl;
        balance += amount;
        cout << "Balance after deposit: " << balance << endl;
        cout << endl;
    }

    // Withdraw function
    void withdraw(double amount)
    {
        cout << "Withdrawing amount: " << amount << endl;
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Balance after withdrawal: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
        cout << endl;
    }

    // Display account details
    void displayDetails() const
    {
        cout << "----- Account Summary -----" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "----------------------------" << endl;
    }
};

int main()
{
    // Your details
    string name = "MUHAMMAD DANISH SAJJAD";
    string vuid = "BC240409225";
    double initialBalance = 10000.0;

    // VUID-based amounts
    double depositAmount = 9225;  // last 4 digits
    double withdrawAmount = 2404; // first 4 digits after 'BC'

    // Create account
    BankAccount myAccount(name, vuid, initialBalance);

    // Perform transactions
    myAccount.deposit(depositAmount);
    myAccount.withdraw(withdrawAmount);

    // Display summary
    myAccount.displayDetails();

    return 0;
}
