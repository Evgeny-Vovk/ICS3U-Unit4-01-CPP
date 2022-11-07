// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit4-01.cpp File,
// learning while statements in C++.

#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string inputNumber;
    int numberAsInt;
    int counter = 0;
    int answer = 0;

    // input
    std::cout << "Input a number to add all the whole numbers up to it: ";
    std::cin >> inputNumber;

    // process and output
    std::cout << "\n";
    try {
        numberAsInt = std::stoi(inputNumber);
        while (counter < numberAsInt){
            counter += 1;
            answer += counter;
            std::cout << counter;
            if (counter < numberAsInt){
                std::cout << " + ";
            }
        }
        std::cout << " = " << answer;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again following the requirements";
    }

    std::cout << "\n\n\nDone.\n";
}
