#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class BankAccount
{
private:
    // variables
    double balance;
    string pin;
    string accountName;

    // function
    bool pinCodeCheck();

public:
    // functions
    bool withdraw(double amount);
    bool deposit(double amount);
    bool transfer(BankAccount &fromAcount, double amount);
    void printBalance();
    string getName();

    BankAccount(string name, double amount, string pincode);
};


int main()
{
    BankAccount checking("Checking", 0, "12345");
    BankAccount savings("Savings", 0, "12345");


    int choice = 0;
    while (choice != 5)
    {
        cout << "\n=================" << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Withdraw" << endl;
        cout << "3 - Print balance" << endl;
        cout << "4 - Transfer funds" << endl;
        cout << "5 - Exit" << endl;
        cout << "> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int account;
            cout << "\nWhat account will the funds be deposited into?" << endl;
            cout << "1 - " << checking.getName() << endl;
            cout << "2 - " << savings.getName() << endl;
            cout << "> ";
            cin >> account;

            double amount;
            cout << "How much would you like to deposit?\n> ";
            cin >> amount;

            if (account == 1)
                checking.deposit(amount);
            else if (account == 2)
                savings.deposit(amount);
            else
                cout << "Invalid account choice" << endl;

            break;
        }
        case 2:
        {
            int account;
            cout << "\nWhat account will the funds be withdrawn from?" << endl;
            cout << "1 - " << checking.getName() << endl;
            cout << "2 - " << savings.getName() << endl;
            cout << "> ";
            cin >> account;

            double amount;
            cout << "How much would you like to withdraw?\n> ";
            cin >> amount;

            if (account == 1)
                checking.withdraw(amount);
            else if (account == 2)
                savings.withdraw(amount);
            else
                cout << "Invalid account choice" << endl;
            break;
        }
        case 3:
        {
            checking.printBalance();
            savings.printBalance();
            break;
        }
        case 4:
        {
            int from;
            int to;
            double amount;
            cout << "\nWhat account will the funds originate from?" << endl;
            cout << "1 - " << checking.getName() << endl;
            cout << "2 - " << savings.getName() << endl;
            cout << "> ";
            cin >> from;
            cout << "What account will the funds be transfered into?" << endl;
            cout << "1 - " << checking.getName() << endl;
            cout << "2 - " << savings.getName() << endl;
            cout << "> ";
            cin >> to;
            cout << "How much would you like to transfer?" << endl;
            cout << "> ";
            cin >> amount;

            if (from == to)
            {
                cout << "The selected accounts are the same" << endl;
                break;
            }

            if (from == 1)
            {
                if (to == 2)
                {
                    savings.transfer(checking, amount);
                }
            }
            else if (from == 2)
            {
                if (to == 1)
                {
                    checking.transfer(savings, amount);
                }
            }
            else
            {
                cout << "Invalid account choice" << endl;
            }

            break;
        }
        case 5:
            exit(0);
            break;
        default:
            cout << "\nYou did not make a valid selection, please try again\n";

        }
    }

    return 0;
}


BankAccount::BankAccount(string name, double amount, string pincode)
{
    accountName = name;
    balance = amount;
    pin = pincode;
}


bool BankAccount::withdraw(double amount)
{
    if (pinCodeCheck())
    {
        if (amount < 0)
        {
            cout << "\n\nWithdraw amount is less than $0.00\n\n";
            return false;
        }
        else if (balance >= amount)
        {
            balance -= amount;
            return true;
        }
        else
        {
            cout << "\n\nInsufficient funds!\n\n";
            return false;
        }
    }
    else
    {
        cout << "\n\nYou don't have permission to withdraw from this account\n\n";
        return false;
    }
}


bool BankAccount::deposit(double amount)
{
    if (pinCodeCheck())
    {
        if (amount >= 0)
        {
            balance += amount;
            return true;
        }
        else
        {
            cout << "\n\nYour deposit amount is below $0.00\n\n";
            return false;
        }
    }
    else
    {
        cout << "\n\nYou don't have permission to deposit into this account\n\n";
        return false;
    }
}


bool BankAccount::pinCodeCheck()
{
    cout << "Enter your account pin for " << accountName << " account\n> ";
    string input;
    cin >> input;

    if (input == pin)
        return true;
    else
        return false;
}


void BankAccount::printBalance()
{
    cout.setf(ios::fixed);BankAccount checking("Checking", 0, "12345");
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << accountName << " account's balance is $" << balance << endl;

    return;
}

string BankAccount::getName()
{
    return accountName;
}

bool BankAccount::transfer(BankAccount &fromAcount, double amount)
{
    if (amount < 0)
    {
        cout << cout << "\n\nTransfer amount is less than $0.00\n\n";
        return false;
    }


    if (fromAcount.withdraw(amount))
    {
        deposit(amount);
        return true;
    }
    else
    {
        return false;
    }

}
