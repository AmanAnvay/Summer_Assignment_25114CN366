/* Write a program to Print character pyramid. 
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA */
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Size :";
cin>>n;
for(int i=1;i<=n;i++){
   for(int j=1;j<=n-i;j++){
    cout<<"  ";
   }
   int a=64,d;
   for(int k=1;k<=i;k++){
    d=a+k;
    char ch =(char)d;
    cout<<ch<<" ";
   }

   for(int l=i-1;l>=1;l--){
    d=a+l;
    char ch =(char)d;
     cout<<ch<<" ";
   }
   cout<<endl;
}

    return 0;
}