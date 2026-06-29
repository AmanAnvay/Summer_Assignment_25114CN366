/* Write a program to Create menu-driven 
calculator. 
*/
#include<iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    do
    {
        cout<< "\n===== MENU DRIVEN CALCULATOR =====";
        cout<< "\n1. Addition";
        cout<< "\n2. Subtraction";
        cout<< "\n3. Multiplication";
        cout<< "\n4. Division";
        cout<< "\n5. Exit";
        cout<< "\nEnter your choice: ";
        cin>> choice;

        switch(choice)
        {
            case 1:
                cout<< "Enter two numbers: ";
                cin >> a >> b;
                cout<< "Result = " << a + b << endl;
                break;

            case 2:
                cout<< "Enter two numbers: ";
                cin>> a >> b;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout<< "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if(b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Division by zero is not possible." << endl;
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}