/* Write a program to Write function to check 
   prime. 
*/
#include<iostream>
using namespace std;
int PrimeNumber(int x);
int PrimeNumber(int x){
    if(x<=1) return 0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    if(PrimeNumber(n)) 
    cout<<"The given Number is Prime Number.";
    else 
    cout<<"The given Number is not a Prime Number.";
    return 0;
}