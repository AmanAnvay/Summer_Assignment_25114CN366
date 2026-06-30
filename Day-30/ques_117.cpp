/* Write a program to Create student record 
system using arrays and strings. 
*/
#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;

struct Student
{
    int roll;
    string name;
    float marks;
};

Student s[MAX];
int n = 0;

void addStudent()
{
    cout << "\nEnter Roll No: ";
    cin >> s[n].roll;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[n].name);

    cout << "Enter Marks: ";
    cin >> s[n].marks;

    n++;
    cout << "Student Added Successfully!\n";
}

void displayStudents()
{
    if(n==0)
    {
        cout << "No Records Found.\n";
        return;
    }

    cout << "\nStudent Records\n";
    cout << "---------------------------\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Roll : "<<s[i].roll<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
        cout<<"---------------------------\n";
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
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Marks: "<<s[i].marks<<endl;
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
        cout<<"\n===== Student Record System =====\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: cout<<"Thank You!\n"; break;
            default: cout<<"Invalid Choice\n";
        }

    }while(choice!=4);

    return 0;
}