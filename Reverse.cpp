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

std::string Reverse::reverseString(std::string word)
{
    // putting the string into a special string to use string functions
    std::string str (word);
    std::string reversedWord = "";
    int length = 0;
    std::string lastLetter;

    if (word == "")
    {
        return reversedWord;
    }
    else
    {
        // getting the last letter of the word
        lastLetter = str.back();

        // deleting the last letter of the word
        // requires c++11
        str.pop_back();

        // appending last letter
        reversedWord = reversedWord + lastLetter;
        // getting the next letter with reccursion
        reversedWord = reversedWord + reverseString(str); 

        return reversedWord;
    }

    
}