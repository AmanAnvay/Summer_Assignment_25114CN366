/*   Write a program to Write function for perfect 
     number. 
*/
#include<iostream>
using namespace std;
int PerfectNumber(int x);
int PerfectNumber(int x){
  int sum=0,temp = x;
  for(int i=1;i<x;i++){
    if(x%i==0){
        sum+=i;
    }
  }
  if(sum==temp) return 1;
  else return 0;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
     
    if(PerfectNumber(n)){
        cout<<"Given number is perfect number "<<endl;
    }else{
        cout<<"Given number is not perfect number "<<endl;
    }
    return 0;

}