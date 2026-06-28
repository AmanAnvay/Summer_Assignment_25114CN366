/* Write a program to Create bank account 
system. 
*/
#include <iostream>
using namespace std;

class Bank
{
    int accNo;
    string name;
    float balance;

public:
    void createAccount()
    {
        cout<< "Enter Account Number: ";
        cin>> accNo;
        cin.ignore();

        cout<< "Enter Name: ";
        getline(cin, name);

        cout<< "Enter Initial Balance: ";
        cin>> balance;
    }

    void deposit()
    {
        float amt;
        cout<< "Enter Deposit Amount: ";
        cin>> amt;
        balance += amt;
    }

    void withdraw()
    {
        float amt;
        cout<< "Enter Withdraw Amount: ";
        cin>> amt;

        if(amt <= balance)
            balance -= amt;
        else
            cout<< "Insufficient Balance!\n";
    }

    void display()
    {
        cout<< "\nAccount Number : " << accNo;
        cout<< "\nName           : " << name;
        cout<< "\nBalance        : " << balance << endl;
    }
};

int main()
{
    Bank b;
    int choice;

    do
    {
        cout<< "\n===== Bank Account System =====";
        cout<< "\n1. Create Account";
        cout<< "\n2. Deposit";
        cout<< "\n3. Withdraw";
        cout<< "\n4. Display";
        cout<< "\n5. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
        case 1: b.createAccount(); break;
        case 2: b.deposit(); break;
        case 3: b.withdraw(); break;
        case 4: b.display(); break;
        case 5: cout << "Thank You!"; break;
        default: cout << "Invalid Choice!";
        }

    }while(choice!=5);

    return 0;
}