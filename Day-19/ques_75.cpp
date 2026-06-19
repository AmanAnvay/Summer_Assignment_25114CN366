// Write a program to Transpose matrix. 
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
      cout<<"Transpose of the given matrix is :"<<endl;
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
        return 0;
}  