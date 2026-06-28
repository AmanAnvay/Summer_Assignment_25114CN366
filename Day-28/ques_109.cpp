/* Write a program to Create library 
management system. 
*/
#include <iostream>
using namespace std;

class Book
{
public:
    int id;
    string title, author;

    void input()
    {
        cout<< "Enter Book ID: ";
        cin>> id;
        cin.ignore();

        cout<< "Enter Book Title: ";
        getline(cin, title);

        cout<< "Enter Author Name: ";
        getline(cin, author);
    }

    void display()
    {
        cout<< "\nBook ID : " << id;
        cout<< "\nTitle   : " << title;
        cout<< "\nAuthor  : " << author << endl;
    }
};

int main()
{
    Book b[100];
    int n = 0, choice;

    do
    {
        cout<< "\n===== Library Management System =====";
        cout<< "\n1. Add Book";
        cout<< "\n2. Display Books";
        cout<< "\n3. Search Book";
        cout<< "\n4. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
        case 1:
            b[n].input();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                b[i].display();
            break;

        case 3:
        {
            int id, found=0;
            cout<< "Enter Book ID: ";
            cin>> id;

            for(int i=0;i<n;i++)
            {
                if(b[i].id==id)
                {
                    b[i].display();
                    found=1;
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found!";
            break;
        }

        case 4:
            cout << "Thank You!";
            break;
        }
    }while(choice!=4);

    return 0;
}