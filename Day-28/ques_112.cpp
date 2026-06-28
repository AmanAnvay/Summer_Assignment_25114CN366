/* Write a program to Create contact 
management system. 
*/
#include<iostream>
using namespace std;

class Contact
{
public:
    string name;
    string phone;

    void input()
    {
        cin.ignore();

        cout<< "Enter Name: ";
        getline(cin, name);

        cout<< "Enter Phone Number: ";
        getline(cin, phone);
    }

    void display()
    {
        cout<< "\nName  : " << name;
        cout<< "\nPhone : " << phone << endl;
    }
};

int main()
{
    Contact c[100];
    int n = 0, choice;

    do
    {
        cout<< "\n===== Contact Management System =====";
        cout<< "\n1. Add Contact";
        cout<< "\n2. Display Contacts";
        cout<< "\n3. Search Contact";
        cout<< "\n4. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
        case 1:
            c[n].input();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                c[i].display();
            break;

        case 3:
        {
            string search;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, search);

            int found = 0;

            for(int i=0;i<n;i++)
            {
                if(c[i].name == search)
                {
                    c[i].display();
                    found = 1;
                }
            }

            if(!found)
                cout<< "Contact Not Found!";
            break;
        }

        case 4:
            cout<< "Thank You!";
            break;

        default:
            cout<< "Invalid Choice!";
        }

    }while(choice!=4);

    return 0;
}