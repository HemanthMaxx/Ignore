#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));  

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool hasGuessedCorrectly = false;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I've selected a random number between 1 and 100. Try to guess it!" << endl;

    while (!hasGuessedCorrectly) {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a valid guess between 1 and 100." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            hasGuessedCorrectly = true;
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in "
                 << attempts << " attempts!" << endl;
        }
    }

    return 0;
}
