#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    void setInitialBalance(double ammount);
    void setAccountName(string name);

    bool withdraw(double amount);
    bool deposit(double amount);
    void print();
private:
    string accountName;
    bool flagNameSet = false;
    double balance;
    bool flagBalanceSet = false;
};

int main()
{
    BankAccount account;

    string tempName;
    double tempBalance;
    cout << "What is the name associated with the account?\n> ";
    cin >> tempName;
    cout << "What is the account's initial balance?\n> ";
    cin >> tempBalance;
    account.setAccountName(tempName);
    account.setInitialBalance(tempBalance);

    account.print();

    cout << endl << "Making a deposit of $400!";
    account.deposit(400.0);

    account.print();



    cout << endl << endl << endl << "Trying to re-initialize account balance" << endl;
    account.setInitialBalance(1000000);
    account.print();

    return 0;
}
void BankAccount::setAccountName(string name)
{
    if (flagNameSet)
    {
        cout << endl << "warning: Account name already set.\n";
        return;
    }

    accountName = name;
    flagNameSet = true;

    return;
}
void BankAccount::setInitialBalance(double amount)
{
    if (flagBalanceSet)
    {
        cout << endl << "warning: Initial balance already set.\n";
        return;
    }

    balance = amount;
    flagBalanceSet = true;

    return;
}

bool BankAccount::deposit(double amount)
{
    if (amount < 0)
    {
        cout << endl << "warning: You can't deposit a negative amount! Transaction canceled.\n";
        return false;
    }

    balance += amount;
    cout << endl << "$" << amount << " deposited into account " << accountName << endl;
    return true;

}

bool BankAccount::withdraw(double amount)
{
    if (amount < 0)
    {
        cout << endl << "warning: You can't withdraw a negative amount! Transaction canceled.\n";
        return false;
    }

    balance -= amount;
    cout << endl << "$" << amount << " withdrawn from account " << accountName << endl;
    return true;
}

void BankAccount::print()
{
    cout << endl << "Account '" << accountName << "' has a balance of $" << balance << endl;

    return;
}
