/* Write a program to Print hollow square 
pattern. 
***** 
*   * 
*   * 
*   * 
*****       */
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size :";
cin>>n;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n;k++){
       if(i==1||i==n||k==1||k==n){
        cout<<"* ";
       }else{
        cout<<"  ";
       }
      
    }
    cout<<endl;
}

    return 0;
}