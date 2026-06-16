#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> seen;

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }

    return 0;
}