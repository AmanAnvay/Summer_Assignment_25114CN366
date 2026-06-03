#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    if(n<=1){
        cout<<"Enter a Valid Interger greater than 1";
        return 1;
    }
    cout<<" Largest Prime Factors of "<<n<<" is : ";
    int Largest_factor= -1;
    while (n % 2 == 0) {
       Largest_factor = 2;
        n = n/ 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            Largest_factor = i;
            n = n/ i;
        }
    }
    if (n > 2) {
        Largest_factor = n;
    }
    cout << Largest_factor << endl;

    return 0;
}
