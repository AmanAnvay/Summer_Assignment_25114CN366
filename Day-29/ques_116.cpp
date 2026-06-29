/* Write a program to Create inventory 
management system. 
*/
#include <iostream>
using namespace std;

class Inventory
{
    int id, quantity;
    char name[50];
    float price;

public:
    void input()
    {
        cout << "\nEnter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nProduct ID : " << id;
        cout << "\nProduct Name : " << name;
        cout << "\nQuantity : " << quantity;
        cout << "\nPrice : " << price;
        cout << "\nTotal Value : " << quantity * price << endl;
    }
};

int main()
{
    Inventory p;
    int choice;

    do
    {
        cout<< "\n===== INVENTORY MANAGEMENT =====";
        cout<< "\n1. Add Product";
        cout<< "\n2. Display Product";
        cout<< "\n3. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
            case 1:
                p.input();
                break;

            case 2:
                p.display();
                break;

            case 3:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}