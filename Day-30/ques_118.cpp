/* Write a program to Create mini library 
system. 
*/
#include<iostream>
#include<string>
using namespace std;

const int MAX=100;

struct Book
{
    int id;
    string title;
    bool issued;
};

Book b[MAX];
int n=0;

void addBook()
{
    cout<<"Book ID: ";
    cin>>b[n].id;
    cin.ignore();

    cout<<"Book Title: ";
    getline(cin,b[n].title);

    b[n].issued=false;
    n++;

    cout<<"Book Added Successfully!\n";
}

void displayBooks()
{
    if(n==0)
    {
        cout<<"No Books Available.\n";
        return;
    }

    cout<<"\nLibrary Books\n";

    for(int i=0;i<n;i++)
    {
        cout<<"ID: "<<b[i].id<<endl;
        cout<<"Title: "<<b[i].title<<endl;
        cout<<"Status: "<<(b[i].issued?"Issued":"Available")<<endl;
        cout<<"----------------------\n";
    }
}

void issueBook()
{
    int id;
    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<n;i++)
    {
        if(b[i].id==id)
        {
            if(!b[i].issued)
            {
                b[i].issued=true;
                cout<<"Book Issued Successfully.\n";
            }
            else
                cout<<"Book Already Issued.\n";
            return;
        }
    }

    cout<<"Book Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== Mini Library System =====\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Books\n";
        cout<<"3. Issue Book\n";
        cout<<"4. Exit\n";
        cout<<"Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:addBook();break;
            case 2:displayBooks();break;
            case 3:issueBook();break;
            case 4:break;
            default:cout<<"Invalid Choice\n";
        }

    }while(choice!=4);

    return 0;
}