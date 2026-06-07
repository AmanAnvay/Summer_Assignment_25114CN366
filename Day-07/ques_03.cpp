//Write a program to Recursive sum of digits. 
#include<iostream>
using namespace std;    
int sumOfDigits(int x);
int sumOfDigits(int x){
    if(x==0) return 0;
    else{
       int sm=0;
       sm+= (x%10)+sumOfDigits(x/10);
       return sm;
    }
} 
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
    
    cout<<"Sum of Digits of a Given Number is "<<sumOfDigits(n)<<endl;
   
}