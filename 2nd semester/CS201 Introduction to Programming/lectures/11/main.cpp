#include <cmath>
#include <ctime>
#include <iostream>
#include <limits>

int getRandomNumber();

// This example was not included in the lecture video. it's just my way of learning by doing!
int main() {
  int randomNumber = getRandomNumber();
  int tries = 0;
  int guess;

  do {
    if (tries == 5) {
      if (randomNumber < 10) {
        std::cout << "GUESS: Number could be in single digit";
      } else {
        std::cout << "GUESS: Number could be in a range of "
                  << randomNumber / 10 << std::endl;
      }
    }

    std::cout << "Enter your guess (1-100): ";

    // Input validation
    while (!(std::cin >> guess) || guess < 1 || guess > 100) {
      std::cout << "Invalid input! Please enter a number between 1 and 100: ";
      std::cin.clear();   // Clear the error state
      std::cin.ignore();  // Discard invalid input
    }

    if (guess > randomNumber) {
      std::cout << "Number is too high" << std::endl;

    } else if (guess < randomNumber) {
      std::cout << "Number is too low" << std::endl;
    }

    tries++;
  } while (tries < 10 && guess != randomNumber);

  if (guess == randomNumber) {
    std::cout << "Yay! 🎉 you guess the number in " << tries << " tries."
              << std::endl;
  } else {
    std::cout << "You lose!";
  }

  std::cout << "DEBUG: tries: " << tries << " randomNumber: " << randomNumber << " guess: " << guess << std::endl;
}

int getRandomNumber() {
  srand(time(nullptr));
  return rand() % 100 + 1;
}
