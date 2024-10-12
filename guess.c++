#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    int numberToGuess = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You found the number in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}