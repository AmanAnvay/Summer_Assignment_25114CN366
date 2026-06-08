/* Write a program to Print repeated-number 
pattern. 
1 
22 
333 
4444 
55555 */
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int k=1;k<=i;k++){
        cout<<i<<" ";
    }
    cout<<endl;
}

    return 0;
}