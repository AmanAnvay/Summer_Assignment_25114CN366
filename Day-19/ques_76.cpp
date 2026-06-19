// Write a program to Find diagonal sum.
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows of Matrix1 :"; 
    cin>>r;
    cout<<"Enter number of columns of Matrix1 :";  
    cin>>c;
    int a[r][c];
    cout<<"Enter elements of the Matrix1 :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    cout<<"Sum of the Diagonal elements of the given matrix is :"<<endl;
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    cout<<sum<<endl;
        return 0;
}  
   