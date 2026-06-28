/* Write a program to Create marksheet 
generation system. 
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Marksheet
{
private:
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

public:
    void input()
    {
        cout<< "Enter Roll Number: ";
        cin>> rollNo;

        cin.ignore();

        cout<< "Enter Student Name: ";
        getline(cin, name);

        cout<< "Enter Marks of 5 Subjects (out of 100):\n";
        cout<< "Subject 1: ";
        cin>> m1;
        cout<< "Subject 2: ";
        cin>> m2;
        cout<< "Subject 3: ";
        cin>> m3;
        cout<< "Subject 4: ";
        cin>> m4;
        cout<< "Subject 5: ";
        cin>> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else if (percentage >= 40)
            grade = 'E';
        else
            grade = 'F';
    }

    void display()
    {
        cout<< "\n====================================";
        cout<< "\n         STUDENT MARKSHEET";
        cout<< "\n====================================";
        cout<< "\nRoll Number : " << rollNo;
        cout<< "\nName        : " << name;

        cout<< "\n\nMarks:";
        cout<< "\nSubject 1 : " << m1;
        cout<< "\nSubject 2 : " << m2;
        cout<< "\nSubject 3 : " << m3;
        cout<< "\nSubject 4 : " << m4;
        cout<< "\nSubject 5 : " << m5;

        cout<< fixed << setprecision(2);
        cout<< "\n\nTotal Marks : " << total << " / 500";
        cout<< "\nPercentage  : " << percentage << "%";
        cout<< "\nGrade       : " << grade;

        if(m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33)
            cout<< "\nResult      : PASS";
        else
            cout<< "\nResult      : FAIL";

        cout<< "\n====================================\n";
    }
};

int main()
{
    Marksheet student;

    student.input();
    student.calculate();
    student.display();

    return 0;
}