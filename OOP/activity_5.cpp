#include<iostream>

using namespace std;

class Customer
{
    public:
        int cusId;
        string custName;
        string custAddress;

        Customer(int id, string name, string address)
        {
            cusId = id;
            custName = name;
            custAddress = address;
        }

        void display_customer()
        {
            cout << "Customer ID: " << cusId << endl;
            cout << "Customer Name: " << custName << endl;
            cout << "Customer Address: " << custAddress << endl;
        }
};

class Account
{
    public:
        int acctId;
        string acctType;
        int acctBalance;

        Account(int id, string type, int balance)
        {
            acctId = id;
            acctType = type;
            acctBalance = balance;
        }

        void display_account()
        {
            cout << "Account ID: " << acctId << endl;
            cout << "Account Type : " << acctType << endl;
            cout << "Account balance : " << acctBalance << endl;
        }

};

class AccountTest : public Customer, public Account
{
    public:
        AccountTest(int id, string name, string address, int acctId, string acctType, int acctBalance) : Customer(id, name, address), Account(acctId, acctType, acctBalance)
        {
            display_customer();
            cout << endl;
            display_account();
        }
};

int main()
{
    AccountTest demoAccount(1234, "John", "New York", 12345, "Savings", 1000);
    return 0;
}