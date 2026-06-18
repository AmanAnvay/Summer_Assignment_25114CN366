// Write a program to Binary search. 
#include <iostream>
using namespace std;

int main() {
    int n, key,arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int start = 0, End = n-1;
    int found = -1;

    while(start <= End) {
        int mid = (start+End) / 2;

        if(arr[mid] == key) {
            found = mid;
            break;
        }
        else if(arr[mid] < key) {
            start = mid+1;
        }
        else {
            End = mid-1;
        }
    }

    if(found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";

    return 0;
}
