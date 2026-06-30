/* Write a program to Develop complete mini 
project using arrays, strings and functions. */
#include<iostream>
#include<string>
using namespace std;

const int MAX=100;

struct Student
{
    int roll;
    string name;
    float marks;
};

Student s[MAX];
int n=0;

void addStudent()
{
    cout<<"Roll Number: ";
    cin>>s[n].roll;
    cin.ignore();

    cout<<"Student Name: ";
    getline(cin,s[n].name);

    cout<<"Marks: ";
    cin>>s[n].marks;

    n++;

    cout<<"Student Added Successfully!\n";
}

void displayStudents()
{
    if(n==0)
    {
        cout<<"No Records Available.\n";
        return;
    }

    cout<<"\n------ Student List ------\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Roll : "<<s[i].roll<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;

        if(s[i].marks>=40)
            cout<<"Result: Pass\n";
        else
            cout<<"Result: Fail\n";

        cout<<"--------------------------\n";
    }
}

void searchStudent()
{
    int roll;
    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            cout<<"Name : "<<s[i].name<<endl;
            cout<<"Marks: "<<s[i].marks<<endl;
            return;
        }
    }

    cout<<"Record Not Found.\n";
}

void updateStudent()
{
    int roll;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    for(int i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            cin.ignore();

            cout<<"New Name: ";
            getline(cin,s[i].name);

            cout<<"New Marks: ";
            cin>>s[i].marks;

            cout<<"Updated Successfully.\n";
            return;
        }
    }

    cout<<"Student Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n========== Student Management ==========\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Update Student\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:addStudent();break;
            case 2:displayStudents();break;
            case 3:searchStudent();break;
            case 4:updateStudent();break;
            case 5:cout<<"Thank You!\n";break;
            default:cout<<"Invalid Choice\n";
        }

    }while(choice!=5);

    return 0;
}