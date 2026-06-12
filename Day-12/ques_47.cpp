/*   Write a program to Write function for 
     Fibonacci. 
*/
#include<iostream>
using namespace std;
int fibonacci(int x);
int fibonacci(int x){
    if(x==0||x==1) return x;
    int sum,a=0,b=1;
    for(int i=2;i<=x;i++){
         sum=a+b;
         a=b;
         b=sum;   
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Fibonacci of given Number is :"<<fibonacci(n)<<endl;

}