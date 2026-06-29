/* Write a program to Create menu-driven array 
operations system. 
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i, sum = 0, max, min;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout<< "\n===== ARRAY OPERATIONS =====";
        cout<< "\n1. Display Array";
        cout<< "\n2. Sum of Elements";
        cout<< "\n3. Find Maximum";
        cout<< "\n4. Find Minimum";
        cout<< "\n5. Exit";
        cout<< "\nEnter Choice: ";
        cin>> choice;

        switch(choice)
        {
            case 1:
                cout<< "Array Elements: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                cout<< "Sum = " << sum << endl;
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                cout << "Maximum = " << max << endl;
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];
                cout<< "Minimum = " << min << endl;
                break;

            case 5:
                cout<< "Exiting..." << endl;
                break;

            default:
                cout<< "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}