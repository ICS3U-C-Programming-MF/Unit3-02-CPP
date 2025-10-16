// copyright 2024 maximiliano fairman
// this code was made on, the 16th october 2024.
// all rights reserved.
// for educational purposes only
// This program is a simple number guessing game from 0 to 9
#include <iostream>

int main() {
    const int CORRECT_NUMBER = 7;
    int guess;

    std::cout << "Guess a number between 0 and 9: ";
    if (std::cin >> guess) {
        if (guess == CORRECT_NUMBER) {
            std::cout << "Correct!\n";
        }
        if (guess != CORRECT_NUMBER) {
            std::cout << "Incorrect. Try again.\n";
        }
    }
}
S