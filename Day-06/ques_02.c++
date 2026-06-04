#include <iostream>
using namespace std;

int main() {
    int binary;
    int decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}