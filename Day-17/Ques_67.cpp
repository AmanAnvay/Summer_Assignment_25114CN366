// Write a program to Intersection of arrays.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    set<int> s(arr1, arr1 + n1);

    cout << "Intersection: ";
    for (int i = 0; i < n2; i++) {
        if (s.find(arr2[i]) != s.end()) {
            cout << arr2[i] << " ";
            s.erase(arr2[i]);
        }
    }

    return 0;
}