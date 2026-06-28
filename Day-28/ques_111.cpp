/* Write a program to Create ticket booking 
system. 
*/
#include <iostream>
using namespace std;

class Ticket
{
    string name;
    int seat;
    bool booked = false;

public:
    void book()
    {
        if(booked)
        {
            cout << "Seat Already Booked!\n";
            return;
        }

        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout<< "Enter Seat Number: ";
        cin>> seat;

        booked = true;
        cout<< "Ticket Booked Successfully!\n";
    }

    void display()
    {
        if(booked)
        {
            cout<< "\nPassenger Name : " << name;
            cout<< "\nSeat Number    : " << seat << endl;
        }
        else
        {
            cout<< "No Ticket Booked.\n";
        }
    }

    void cancel()
    {
        if(booked)
        {
            booked = false;
            cout<< "Ticket Cancelled Successfully.\n";
        }
        else
        {
            cout<< "No Booking Found.\n";
        }
    }
};

int main()
{
    Ticket t;
    int choice;

    do
    {
        cout<< "\n===== Ticket Booking System =====";
        cout<< "\n1. Book Ticket";
        cout<< "\n2. Display Ticket";
        cout<< "\n3. Cancel Ticket";
        cout<< "\n4. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
        case 1: t.book(); break;
        case 2: t.display(); break;
        case 3: t.cancel(); break;
        case 4: cout<< "Thank You!"; break;
        default: cout<< "Invalid Choice!";
        }

    }while(choice!=4);

    return 0;
}