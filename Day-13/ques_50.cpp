/*  Write a program to Find sum and average of 
    array. 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array :";
    cin>>n;
    cout<<"Enter element of an array :"<<endl;
    int a[n],sum=0,avg;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"Sum of Element of an array is "<<sum<<endl;
   
    avg=sum/n;
    cout<<"Average of an array is "<<avg;
    return 0;
}