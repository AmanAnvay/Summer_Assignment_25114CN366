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
    cout<<"Factors of "<<n<<" are : ";
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n/ 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n/ i;
        }
    }
    if (n > 2) {
        cout << n;
    }
    cout <<endl;

    return 0;
}
