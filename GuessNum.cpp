#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() {
    
    std::srand(std::time(0));

    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << " A random number between 1 and 100 is generated.\n";
    std::cout << "Can you guess what it is?\n";

    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > randomNumber) {
            std::cout << "Guess is too high. Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Guess is too low. Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
        }
    } while (guess != randomNumber);

    return 0;
}
