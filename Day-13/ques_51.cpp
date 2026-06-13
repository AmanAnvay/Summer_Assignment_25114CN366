/*  Write a program to Find largest and smallest 
    element. 
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array :";
    cin>>n;
    int a[n];
    int max = INT_MIN;
    int min = INT_MAX;
    cout<<"Enter elements of the arrays "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(max<a[i]) max = a[i];
        if(min>a[i]) min = a[i];
    }
    cout<<"Maximum element in the array is: "<<max<<endl;
    cout<<"Minimum element in the array is: "<<min<<endl;
    return 0;
}