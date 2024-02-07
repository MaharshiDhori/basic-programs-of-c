#include <iostream>

using namespace std;

class Account
{
public:
    int accountNO;
    string accountType;
    int accountBalance;

    void setAccountDetails(int accNo, string accType, int accBalance)
    {
        accountNO = accNo;
        accountType = accType;
        accountBalance = accBalance;
    }

    int deposite(int ammount)
    {
        return accountBalance = accountBalance + ammount;
    }

    int withdraw(int ammount)
    {
        return accountBalance = accountBalance - ammount;
    }

    void dispAccountDetails()
    {
        cout << "Account No: " << accountNO << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }
};

class Main1 : public Account
{
public:
   static void main()
    {
        Account demoAccount;
        demoAccount.setAccountDetails(12345, "Savings", 1000);
        demoAccount.dispAccountDetails();

        cout << "\nAfter adding deposite: \n" << endl;

        demoAccount.deposite(500);
        demoAccount.dispAccountDetails();

        cout << "\nAfter withdrwing money: \n" << endl;

        demoAccount.withdraw(200);
        demoAccount.dispAccountDetails();
    }
};

int main()
{
    Main1::main();
    return 0;
}