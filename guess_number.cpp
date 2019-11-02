// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This program makes guessing number

#include <iostream>
#include <string>

main() {
    // This will check if numbers are equal

    // Defining seed as the time using time(NULL)
    srand(time(NULL));

    // variables
    int number = rand() % 3 + 1;
    std::string guess;
    int integerGuess;

    // Welcome statement
    std::cout << "Welcome, this is the NUMBER GUESSER." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // process
    while (true) {
        // input
        std::cout << "Guess the number: " << std::endl;
        std::cin >> guess;
        try {
            integerGuess = std::stoi(guess);
        } catch (std::invalid_argument) {
            std::cout << "Invalid input.";
            break;
        }
        if (integerGuess == number) {
            // output
            std::cout << "Good job, you got it.";
            break;
        } else {
            std::cout << "you got it wrong.\n\n";
        }
    }
}
