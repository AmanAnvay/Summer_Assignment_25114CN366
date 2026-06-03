#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter a number :";
 cin>>n;
 int fact,ld=0,sum=0, temp=n;
 while(n!=0){
      ld=n%10;
      fact=1;
      for(int i=1;i<=ld;i++){
         fact*=i;  
        }
        sum+=fact;
        n/=10;
    }
    if(sum==temp){
        cout<<"Strong Number";
    }else{
        cout<<"Not a Strong Number";
    }
    return 0;
 }
