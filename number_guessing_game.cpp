// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This lets the user guess a number

#include <iostream>
#include <string>

int main() {
    // this function uses a try statement
    std::string guess_as_string;
    int guess_as_number;
    int number;

    // random number
    number = rand() % 9 + 0;

    // input
    std::cout << "Guess my number between 0 and 9: ";
    std::cin >> guess_as_string;

    // process & output
    try {
        guess_as_number = std::stoi(guess_as_string);
        if (guess_as_number == number) {
            std::cout << "" << std::endl;
            std::cout << "Correct! My number was "<< (number) << std::endl;
        } else if (guess_as_number != number) {
            std::cout << "" << std::endl;
            std::cout << "Sorry. Better luck next time." << std::endl;
            std::cout << "My number was "<< (number) << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a integer";
    }
}
