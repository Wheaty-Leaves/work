#include "Reverse.h"
#include <iostream>
using namespace std;

int main(void)
{
    Reverse reverser = Reverse();
    int number = 12345;
    int reversedNumber = reverser.reverseDigit(number);
    cout << reversedNumber << endl;

    string word = "abcde";
    string reversedString = reverser.reverseString(word);
    cout << reversedString << endl;
    
    return 0;
}