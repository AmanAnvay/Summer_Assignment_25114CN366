/* Write a program to Create menu-driven 
string operations system. 
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(str, 100);

    do
    {
        cout<< "\n===== STRING OPERATIONS =====";
        cout<< "\n1. Find Length";
        cout<< "\n2. Reverse String";
        cout<< "\n3. Convert to Uppercase";
        cout<< "\n4. Convert to Lowercase";
        cout<< "\n5. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
            case 1:
                cout << "Length = " << strlen(str) << endl;
                break;

            case 2:
            {
                char rev[100];
                strcpy(rev, str);
                strrev(rev);
                cout << "Reversed String = " << rev << endl;
                break;
            }

            case 3:
                for(int i = 0; str[i]; i++)
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                cout << "Uppercase: " << str << endl;
                break;

            case 4:
                for(int i = 0; str[i]; i++)
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] += 32;
                cout << "Lowercase: " << str << endl;
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}