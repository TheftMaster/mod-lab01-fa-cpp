// Copyright 2022 UNN-IASR

#include <cctype>
#include "fun.h"

unsigned int faStr1(const char* str) {
    unsigned int count = 0;
    bool inWord = false;

    while (str != '\0') {
        if (std::isalpha(str)) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }

        str++;
    }

    return count;
}

unsigned int faStr2(const char* str) {
    unsigned int count = 0;
    bool inWord = false;

    while (str != '\0') {
        if (std::isupper(str)) {
            if (!inWord) {
                inWord = true;
                bool onlyLowercase = true;

                while (std::isalpha(str)) {
                    if (std::isupper(str)) {
                        onlyLowercase = false;
                        break;
                    }
                    str++;
                }

                if (onlyLowercase) {
                    count++;
                }
            }
        } else {
            inWord = false;
        }

        str++;
    }

    return count;
}

unsigned int faStr3(const char* str) {
    unsigned int totalLength = 0;
    unsigned int wordCount = 0;
    bool inWord = false;

    while (str != '\0') {
        if (std::isalpha(str)) {
            if (!inWord) {
                inWord = true;
                wordCount++;
            }
            totalLength++;
        } else {
            inWord = false;
        }

        str++;
    }

    return (totalLength + wordCount - 1) / wordCount;
}
