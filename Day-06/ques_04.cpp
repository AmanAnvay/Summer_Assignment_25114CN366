#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"Enter Base :";
    cin>>base;
    
    int pow;
    cout<<"Enter power :";
    cin>>pow;
    
    int power=1;
    for(int i=0;i<pow;i++){
        power=power*base;
    }
    cout<<"Result :"<<power;

    return 0;

}