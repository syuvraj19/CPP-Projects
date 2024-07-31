#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    char playAgain;

    do {
        // Initialize random seed
        srand(time(0));

        // Generate a random number between 1 and 100
        int randomNumber = rand() % 100 + 1;
        int userGuess;
        int attempts = 0;

        cout << "Welcome to the Guess the Number game!" << endl;
        cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

        // Main game loop
        do {
            cout << "Enter your guess: ";
            cin >> userGuess;
            attempts++;

            if (userGuess > randomNumber) {
                cout << "Too high! Try again." << endl;
            } else if (userGuess < randomNumber) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            }
        } while (userGuess != randomNumber);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
