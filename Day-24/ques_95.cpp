#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
    string sentence, word;
    string longest = "";

    cout<<"Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while(ss >> word){
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout<<"Longest word: "<<longest;

    return 0;
}