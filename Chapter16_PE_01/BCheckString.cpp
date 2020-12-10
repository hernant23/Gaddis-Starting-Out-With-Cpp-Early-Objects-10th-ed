//
// Created by Hernan Teran on 12/10/20.
//

#include "BCheckString.h"
#include <utility>

BCheckString::BCheckString(std::string word) : word(std::move(word)) {}

const std::string &BCheckString::getWord() const {
    return word;
}

char BCheckString::operator[](const int &k) {
    if (k < 0 || k >= word.length()) {
        throw BoundsException(k);
    }
    return word[k];
}

BCheckString::BoundsException::BoundsException(int subscript) : subscript(subscript) {}

int BCheckString::BoundsException::getSubscript() const {
    return subscript;
}