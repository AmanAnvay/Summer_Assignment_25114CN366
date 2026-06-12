/*   Write a program to Write function for 
     palindrome. 
*/
#include<iostream>
using namespace std;
int Palindrome(int x);
int Palindrome(int x){
    int temp = x, rev =0,ld;
    while(x!=0){
        ld=x%10;
        rev=rev*10+ld;
        x/=10;
    }
    if(temp==rev) return 1;
    else return 0;
}
int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    if(Palindrome(n)) 
    cout<<"The given Number is Palindrome.";
    else 
    cout<<"The given Number is not a Palindrome.";
    return 0;
}