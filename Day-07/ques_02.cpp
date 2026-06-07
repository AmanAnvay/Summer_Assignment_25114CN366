//Write a program to Recursive Fibonacci. 
#include<iostream>
using namespace std;
int fibonacci(int x);
int fibonacci(int x){
    if(x==0||x==1) return x;
    else{
       return fibonacci(x-1)+fibonacci(x-2);
    }
}
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}