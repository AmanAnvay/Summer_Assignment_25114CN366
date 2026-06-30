/* Write a program to Create mini employee 
management system. 
*/
#include<iostream>
#include<string>
using namespace std;

const int MAX=100;

struct Employee
{
    int id;
    string name;
    float salary;
};

Employee emp[MAX];
int n=0;

void addEmployee()
{
    cout<<"Employee ID: ";
    cin>>emp[n].id;
    cin.ignore();

    cout<<"Employee Name: ";
    getline(cin,emp[n].name);

    cout<<"Salary: ";
    cin>>emp[n].salary;

    n++;

    cout<<"Employee Added Successfully!\n";
}

void displayEmployees()
{
    if(n==0)
    {
        cout<<"No Employee Records.\n";
        return;
    }

    cout<<"\nEmployee List\n";

    for(int i=0;i<n;i++)
    {
        cout<<"ID: "<<emp[i].id<<endl;
        cout<<"Name: "<<emp[i].name<<endl;
        cout<<"Salary: "<<emp[i].salary<<endl;
        cout<<"----------------------\n";
    }
}

void searchEmployee()
{
    int id;
    cout<<"Enter Employee ID: ";
    cin>>id;

    for(int i=0;i<n;i++)
    {
        if(emp[i].id==id)
        {
            cout<<"Name: "<<emp[i].name<<endl;
            cout<<"Salary: "<<emp[i].salary<<endl;
            return;
        }
    }

    cout<<"Employee Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== Employee Management =====\n";
        cout<<"1. Add Employee\n";
        cout<<"2. Display Employees\n";
        cout<<"3. Search Employee\n";
        cout<<"4. Exit\n";
        cout<<"Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:addEmployee();break;
            case 2:displayEmployees();break;
            case 3:searchEmployee();break;
            case 4:break;
            default:cout<<"Invalid Choice\n";
        }

    }while(choice!=4);

    return 0;
}