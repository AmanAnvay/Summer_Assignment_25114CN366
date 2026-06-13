/*  Write a program to Count even and odd 
    elements. 
*/
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
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) count++;
    }
    cout<<"Number of even elements in the array is: "<<count<<endl;
    count = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0) count++;
    }
    cout<<"Number of odd elements in the array is: "<<count<<endl;
    return 0;
}