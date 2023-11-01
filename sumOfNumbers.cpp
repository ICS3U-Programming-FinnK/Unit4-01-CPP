// Created by: Finn Kitor
// Date: November 1st, 2023
// This program asks the user for a positive integer. It
// then calculates the sum of the numbers from 0 up to
// that integer.
#include <iostream>

int main() {
    // terminal will initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int userNum;

    // get the user number as a string
    std::cout << "Enter a number: ";
    std::cin >> userNum;
    std::cout << std::endl;

    // Terminal will calculate the sum of all numbers from 0 to user number
    while (counter <= userNum) {
        sum = sum + counter;
        std::cout << "Tracking " << counter << " times through the loop.\n";
        counter = counter + 1;
    }
    // Terminal will display the sum to the user
    std::cout << "\nThe sum of the numbers from 0 to " << userNum << " is: " << sum << std::endl;
}