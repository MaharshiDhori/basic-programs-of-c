#include <iostream>

//Menu driven program to perform operations on bank account.

using namespace std;

class Account
{
private:
    int acctBalance;

public:
    int acctID;
    string acctType;
    int a_balance;
    // int acctBalance;

    Account(int id, string type, int balance)
    {
        acctID = id;
        acctType = type;
        acctBalance = balance;
    }

    void deposite(int ammount)
    {
        acctBalance += ammount;
    }

    void withdraw(int ammount)
    {
        acctBalance -= ammount;
    }

    int getBalance()
    {
        a_balance = acctBalance;
        return a_balance;
    }

    void display()
    {
        cout << "Account ID: " << acctID << endl;
        cout << "Account Type: " << acctType << endl;
        cout << "Account Balance: " << acctBalance << endl;
    }
};

class AccountMain
{
public:
    static void main()
    {
        int choice;
        int amount;

        Account demoac(123, "Current", 2000);

        do
        {
            cout << "\nMenu:" << endl;
            cout << "1. Deposie" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Display Balance" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter the choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter the amount to deposite: ";
                cin >> amount;
                demoac.deposite(amount);
                cout << "Deposite Successful" << endl;
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                demoac.withdraw(amount);
                cout << "Withdraw Successful" << endl;
                break;

            case 3:
                demoac.getBalance();
                demoac.display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
            }

        } while (choice != 4);
    }
};

int main()
{
    AccountMain :: main();
    return 0;
}