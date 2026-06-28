/* Write a program to Create salary management 
system. 
*/
#include<iostream>
using namespace std;

class Salary
{
public:
    int id;
    string name;
    float basic, hra, da, total;

    void input()
    {
        cout<< "Enter Employee ID: ";
        cin>> id;

        cin.ignore();

        cout<< "Enter Employee Name: ";
        getline(cin, name);

        cout<< "Enter Basic Salary: ";
        cin>> basic;

        hra = basic * 0.20;
        da = basic * 0.10;
        total = basic + hra + da;
    }

    void display()
    {
        cout<< "\nEmployee ID : " << id;
        cout<< "\nName        : " << name;
        cout<< "\nBasic Salary: " << basic;
        cout<< "\nHRA (20%)   : " << hra;
        cout<< "\nDA (10%)    : " << da;
        cout<< "\nTotal Salary: " << total << endl;
    }
};

int main()
{
    Salary s[100];
    int n=0, choice;

    do
    {
        cout<< "\n===== Salary Management =====";
        cout<< "\n1. Add Employee Salary";
        cout<< "\n2. Display Salary Records";
        cout<< "\n3. Search Employee";
        cout<< "\n4. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
        case 1:
            s[n].input();
            n++;
            break;

        case 2:
            if(n==0)
                cout<<"No Records Found.\n";
            else
                for(int i=0;i<n;i++)
                    s[i].display();
            break;

        case 3:
        {
            int id, found=0;
            cout<<"Enter Employee ID: ";
            cin>>id;

            for(int i=0;i<n;i++)
            {
                if(s[i].id==id)
                {
                    s[i].display();
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