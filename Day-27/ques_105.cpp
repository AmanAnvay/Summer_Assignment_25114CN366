/*Write a program to Create student record 
management system. 
*/
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;

    void input()
    {
        cout<<"Enter Roll No: ";
        cin>>roll;

        cin.ignore();

        cout<<"Enter Name: ";
        getline(cin, name);

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"\nRoll No : " << roll;
        cout<<"\nName     : " << name;
        cout<<"\nMarks    : " << marks << endl;
    }
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout<< "\n===== Student Record Management =====";
        cout<< "\n1. Add Student";
        cout<< "\n2. Display All Students";
        cout<< "\n3. Search Student";
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
                cout << "No Records Found.\n";
            else
                for(int i=0;i<n;i++)
                    s[i].display();
            break;

        case 3:
        {
            int r, found=0;
            cout<< "Enter Roll No: ";
            cin>> r;

            for(int i=0;i<n;i++)
            {
                if(s[i].roll==r)
                {
                    s[i].display();
                    found=1;
                    break;
                }
            }

            if(!found)
                cout<< "Student Not Found.\n";
            break;
        }

        case 4:
            cout<< "Program Ended.";
            break;

        default:
            cout<< "Invalid Choice!";
        }

    }while(choice!=4);

    return 0;
}