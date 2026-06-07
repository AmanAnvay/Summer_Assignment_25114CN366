//Write a program to Recursive reverse number.
#include<iostream>
using namespace std;    
int reverseNumber(int x);
 int rev=0;
int reverseNumber(int x){
    if(x==0) return rev;
        
        rev=rev*10+(x%10);
        return reverseNumber(x/10);
        
}   
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    cout<<"Reverse of the Given Number is "<<reverseNumber(n)<<endl;
}
    