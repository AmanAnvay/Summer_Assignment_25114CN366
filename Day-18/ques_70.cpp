// Write a program to Selection sort. 
#include<iostream>
using namespace std;
int main(){
    int n,a[100],temp,i,j;
    cout<<"Enter Size :";
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
             if(a[j] < a[min]) {
                min = j;
            }
        }
        temp= a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout<<"Sorted array using Selection sort"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}