/* Write a program to Write function to find 
   maximum. 
*/
#include<iostream>
// using namespace std;
int MaximumNumber(int x, int y);
int MaximumNumber(int x, int y){
    if(x>y) return x;
    else return y;
}
int main(){
    int n1;
    std::cout<<"Enter a Number1 :";
    std::cin>>n1;

    int n2;
    std::cout<<"Enter a Number2 :";
    std::cin>>n2;

    std::cout<<"Maximum of the given Numbers is :"<<MaximumNumber(n1, n2);
    return 0;
}