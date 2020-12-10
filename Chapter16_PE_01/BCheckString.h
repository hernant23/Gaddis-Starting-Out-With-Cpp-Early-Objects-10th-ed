//
// Created by Hernan Teran on 12/10/20.
//

#ifndef CPP_PRACTICE_BCHECKSTRING_H
#define CPP_PRACTICE_BCHECKSTRING_H
#include <string>

class BCheckString {
private:
    std::string word;

public:
    BCheckString(std::string word);

    const std::string &getWord() const;

    char operator[](const int &k);

    class BoundsException
    {
    private:
        int subscript;

    public:
        BoundsException(int subscript);

        int getSubscript() const;
    };

};

#endif //CPP_PRACTICE_BCHECKSTRING_H