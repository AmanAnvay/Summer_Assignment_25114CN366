/* Write a program to Write function to find sum 
    of two numbers. */

#include<iostream>
using namespace std;
void Sum (int x , int y);
void Sum(int x, int y){
    int sm = x + y;
    cout<<"Sum of the given Numbers are :"<<sm;
}
int main(){
    int n1;
    cout<<"Enter a Number1 :";
    cin>>n1;

    int n2;
    cout<<"Enter a Number2 :";
    cin>>n2;

    Sum(n1, n2);
    return 0;
} 