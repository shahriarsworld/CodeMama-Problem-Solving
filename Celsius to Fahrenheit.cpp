// Problem Statement
// Write a program to convert temperature from Celsius to Fahrenheit.

#include <iostream>
#include <iomanip> 

int main() {
    float celsius;
    std::cin >> celsius;
    
    float fahrenheit = (celsius * 9 / 5) + 32;
    
    std::cout << "The temperature in Fahrenheit is: " 
              << std::fixed << std::setprecision(2) << fahrenheit << std::endl;
    
    return 0;
}
