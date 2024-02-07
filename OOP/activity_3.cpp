#include<iostream>

using namespace std;

//Display account number, account type and account balance with the depostie and withdraw using class object and constructor
class Account
{
public:
    int accountNO;
    string accountType;
    int accountBalance;

    Account(int accNo, string accType, int accBalance, int d_amount, int w_amount)
    {   
        accountNO = accNo;
        accountType = accType;
        accountBalance = accBalance;
        dispAccountDetails();
        cout << "\nAfter adding deposite: \n" << endl;
        deposite(d_amount);
        dispAccountDetails();
        cout << "\nAfter withdrawing money: \n" << endl;
        withdraw(w_amount);
        dispAccountDetails();

    }

    // void setAccountDetails(int accNo, string accType, int accBalance)
    // {
    //     accountNO = accNo;
    //     accountType = accType;
    //     accountBalance = accBalance;
    // }

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

int main()
{
    Account demoAccount(1234, "Saving", 1000, 500, 200);
    return 0;
}