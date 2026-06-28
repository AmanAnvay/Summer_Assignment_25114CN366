/* Write a program to Create employee 
management system. 
*/
#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    string department;

    void input()
    {
        cout<< "Enter Employee ID: ";
        cin>> id;

        cin.ignore();

        cout<< "Enter Name: ";
        getline(cin, name);

        cout<< "Enter Department: ";
        getline(cin, department);
    }

    void display()
    {
        cout<< "\nEmployee ID : " << id;
        cout<< "\nName        : " << name;
        cout<< "\nDepartment  : " << department << endl;
    }
};

int main()
{
    Employee emp[100];
    int n=0, choice;

    do
    {
        cout << "\n===== Employee Management =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            emp[n].input();
            n++;
            break;

        case 2:
            if(n==0)
                cout<<"No Employee Records.\n";
            else
                for(int i=0;i<n;i++)
                    emp[i].display();
            break;

        case 3:
        {
            int id, found=0;
            cout<<"Enter Employee ID: ";
            cin>>id;

            for(int i=0;i<n;i++)
            {
                if(emp[i].id==id)
                {
                    emp[i].display();
                    found=1;
                    break;
                }
            }

            if(!found)
                cout<<"Employee Not Found.\n";

            break;
        }

        case 4:
            cout<<"Program Ended.";
            break;

        default:
            cout<<"Invalid Choice!";
        }

    }while(choice!=4);

    return 0;
}