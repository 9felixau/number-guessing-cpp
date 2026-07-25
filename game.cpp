#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secret = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to Number Guessing Game!" << std::endl;
    std::cout << "Guess a number between 1 and 100." << std::endl;

    while (guess != secret) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secret) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secret) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed it in " << attempts << " attempts." << std::endl;
        }
    }
    return 0;
}
