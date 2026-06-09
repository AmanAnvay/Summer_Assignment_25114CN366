/* Write a program to Print reverse number 
triangle. 
 
12345 
1234 
123 
12 
1   */
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size :";
cin>>n;
for(int i=n;i>=1;i--){
    for(int k=1;k<=i;k++){
        cout<<k<<" ";
    }
    cout<<endl;
}

    return 0;
}