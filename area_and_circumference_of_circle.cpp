// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on November 2020
// This program calculates the area and circumference of a circle
//     with a radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Then..." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm²" << std::endl;
    std::cout << "Circumference is " << (2*M_PI*15) << "mm" << std::endl;
}
