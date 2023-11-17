// Copyright 2023 Marli Peters
// Created by: Marli Peters
// Date: Nov. 17, 2023
// This program asks the user for a positive integer. It
// then calculates the factorials of the numbers 0 to
// that integer.
#include <iostream>

int main() {
    int counter = 0;
    int factorialAnswer = 1;
    int userNumInt;
    std::string userNumStr;

    std::cout << "Enter a positive number: ";
    std::cin >> userNumStr;
    std::cout << std::endl;

    try {
        userNumInt = std::stoi(userNumStr);
    } catch (std::invalid_argument) {
        {}
    }

    if (userNumInt < 0) {
        std::cout << "Please enter a positive number.\n";
    } else {
        try {
            userNumInt = std::stoi(userNumStr);
            do {
                counter++;
                factorialAnswer = factorialAnswer * counter;
                std::cout << "Tracking " << (counter)
<< " times through loop.\n";
            } while (counter < userNumInt);
            std::cout << userNumInt << "! = " << factorialAnswer << std::endl;
        }
        catch (std::invalid_argument) {
            std::cout << "Please enter a positive number.\n";
        }
    }
}
