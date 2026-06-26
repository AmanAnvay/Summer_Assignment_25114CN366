/*Write a program to Create number guessing 
game. 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "Guess a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret)
            cout << "Too High!\n";
        else if (guess < secret)
            cout << "Too Low!\n";
        else
            cout << "Congratulations! You guessed it in "
                 << attempts << " attempts.\n";

    } while (guess != secret);

    return 0;
}