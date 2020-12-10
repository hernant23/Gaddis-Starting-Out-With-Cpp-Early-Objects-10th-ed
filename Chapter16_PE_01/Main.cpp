#include <iostream>
#include <string>
#include "BCheckString.h"

int main()
{
    try
    {
        std::string word;
        std::cout << "Enter a word: ";
        getline(std::cin, word);

        BCheckString string(word);
        std::cout << string[-3];
    }
    catch (BCheckString::BoundsException &e)
    {
        std::cout << "Error: " << e.getSubscript() << " out of range";
    }
    
    return 0;
}
