#include "Reverse.h"
#include <iostream>
#include <math.h>
#include <string>

Reverse::Reverse(/* args */)
{
}

Reverse::~Reverse()
{
}

int Reverse::reverseDigit(int number)
{
    int reversedNumber = 0;
    int lastNumber;
    int magnitude;
    
    if(number == 0)
    {
        return reversedNumber;
    }
    else
    {
        // isolating the least significant digit
        lastNumber = number % 10;

        // determine magnitude of number
        magnitude = pow(10, (int)log10(number));

        // itterating the original number
        number = (number - lastNumber) / 10; // removing the least significant digit
        // std::cout << "Number: " << number << std::endl;  
        
        // adding numbers whos positions are determined by their magnitude 
        reversedNumber = (lastNumber * magnitude) + reverseDigit(number);

        return reversedNumber;
    }
}

std::string Reverse::reverseString(std::string)
{
    return "yAY";
}