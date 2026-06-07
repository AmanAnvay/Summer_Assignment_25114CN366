//Write a program to Recursive factorial.
#include<iostream>
using namespace std;
int factorial(int x);
int factorial(int x){
    int fact=1;
    if(x==1||x==0) return 1;
    else{
    
    fact*=x*factorial(x-1);
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
    
    cout<<"Factorial of a Given Number is "<<factorial(n)<<endl;
   
}