// Write a program to Add matrices.
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
    int p,q;
    cout<<"Enter number of rows of Matrix2 :"; 
    cin>>p;
    cout<<"Enter number of columns of Matrix2 :";  
    cin>>q;
    int b[p][q];
    cout<<"Enter elements of the Matrix2 :"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    if(r==p && c==q){
        int sum[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        cout<<"Sum of the given two Matrix is :"<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Matrix Addition is not possible.";
    return 0;
}