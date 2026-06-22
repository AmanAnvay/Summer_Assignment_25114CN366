/* Write a program to Count words in a 
sentence. 
*/
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int words = 0;

    cout<<"Enter a sentence: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        if((i==0 && str[i]!= ' ') ||
           (str[i]!= ' ' && str[i - 1]== ' '))
            words++;
    }

    cout<<"Total Words = "<<words;

    return 0;
}