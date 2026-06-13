//  Write a program to Input and display array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array :";
    cin>>n;
    cout<<"Enter element of an array :"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array of size n is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}