/*   Write a program to Write function to find 
     factorial. 
*/

#include<iostream>
using namespace std;
int factorial(int x);
int factorial(int x){
    if(x==0||x==1) return 1;
    int fact =1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
     
    cout<<"Factorial of a given Number is:"<<factorial(n)<<endl;

}