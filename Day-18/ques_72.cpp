/*Write a program to Sort array in descending 
order.*/
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
        for(j=0;j<n-i-1;j++){
             if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
             }
        }
    }
    cout<<"Sorted array in Descending Order :"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}