/* Write a program to Print reverse star pattern. 
***** 
**** 
*** 
** 
*   */
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int k=i;k<=n;k++){
        cout<<"* ";
    }
    cout<<endl;
}

    return 0;
}