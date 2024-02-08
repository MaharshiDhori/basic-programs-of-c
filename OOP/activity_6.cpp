#include<iostream>

// Counted the number of instances of the Customer and Account classes.

using namespace std;

class Customer
{
    private :
        static int instanceCount;

    public:
        int cusId;
        string custName;
        string custAddress;

        Customer(int id, string name, string address)
        {
            cusId = id;
            custName = name;
            custAddress = address;
            instanceCount++;
        }

        void display_customer()
        {
            cout << "Customer ID: " << cusId << endl;
            cout << "Customer Name: " << custName << endl;
            cout << "Customer Address: " << custAddress << endl;
        }

        static int getInstanceCount()
        {
            return instanceCount;
        }
};

int Customer :: instanceCount = 0;

class Account
{
    private :
        static int instanceCount;

    public:
        int acctId;
        string acctType;
        int acctBalance;

        Account(int id, string type, int balance)
        {
            acctId = id;
            acctType = type;
            acctBalance = balance;
            instanceCount++;
        }

        void display_account()
        {
            cout << "Account ID: " << acctId << endl;
            cout << "Account Type : " << acctType << endl;
            cout << "Account balance : " << acctBalance << endl;
        }

        static int getInstanceCount()
        {
            return instanceCount;
        }

};

int Account :: instanceCount = 0;

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

    cout << "Number of instaces of Customer class : " << Customer :: getInstanceCount() << endl;
    cout << "Number of instaces of Account class : " << Account :: getInstanceCount() << endl;
    return 0;
}