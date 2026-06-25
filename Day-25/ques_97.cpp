#include<iostream>
using namespace std;

int main(){
    int n1, n2;

    cout<<"Enter size of first array: ";
    cin>>n1;
    int a[n1];

    cout<<"Enter elements of first sorted array: ";
    for(int i=0; i<n1; i++)
        cin>>a[i];

    cout<<"Enter size of second array: ";
    cin>>n2;
    int b[n2];

    cout<<"Enter elements of second sorted array: ";
    for(int i=0; i<n2; i++)
        cin >> b[i];

    int merged[n1 + n2];
    int i=0, j=0, k=0;

    while(i < n1 && j < n2) {
        if(a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while(i < n1)
        merged[k++] = a[i++];

    while(j < n2)
        merged[k++] = b[j++];

    cout << "Merged Array: ";
    for(int i = 0; i < n1 + n2; i++)
        cout << merged[i] << " ";

    return 0;
}