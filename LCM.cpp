// Copyright (c) 2022 Zaida Hammel All rights reserved.
//
// Created by: Zaida Hammel
// Created on: Dec 2022
// This program calculates the LCM of two integers

#include <iostream>


int main() {
    int integer1;
    int integer2;
    int max;

    std::cout << "Enter your first integer: ";
    std::cin >> integer1;

    std::cout << "\nEnter your second integer: ";
    std::cin >> integer2;

    // maximum value between n1 and n2 is stored in max
    max = (integer1 > integer2) ? integer1 : integer2;

    do {
        if (max % integer1 == 0 && max % integer2 == 0) {
            std::cout << "\nThe LCM of those two numbers are: " << max;
            break;
        } else {
            ++max;
        }
    } while (true);

    return 0;
}
