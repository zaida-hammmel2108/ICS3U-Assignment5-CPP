// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Nov 2022
// This program determines the lowest common multiple

#include <iostream>
using namespace std;

int main() {
    int num1, num2, maxValue;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    maxValue = (num1 > num2) ? num1 : num2;

    while (1) {
        // condition of LCM
        if ((maxValue % num1 == 0) && (maxValue % num2 == 0)) {
            cout << "LCM: " << maxValue << endl;
            break;
        }
        ++maxValue;
    }
    return 0;

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
