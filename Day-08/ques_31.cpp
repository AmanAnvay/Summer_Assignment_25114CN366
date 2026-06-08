/*  Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE  */
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size :";
cin>>n;
for(int i=1;i<=n;i++){
    int a=64,d;
    for(int k=1;k<=i;k++){
       d=a+k;
        char ch =(char)d;
        cout<<ch<<" ";
    }
    cout<<endl;
}

    return 0;
}