// Copyright 2022 UNN-IASR

#include <cctype>
#include "fun.h"

unsigned int faStr1(const char* str) {
    unsigned int count = 0;
    bool isWord = false;

    while (*str != '\0') {
        if (std::isalpha(*str) && !std::isdigit(*str)) {
            if (!isWord) {
                count++;
                isWord = true;
            }
        } else {
            isWord = false;
        }

        str++;
    }

    return count;
}

unsigned int faStr2(const char* str) {
    unsigned int count = 0;
    bool isWord = false;

    while (*str != '\0') {
        if (std::isupper(*str)) {
            if (!isWord) {
                isWord = true;
                count++;
            }
        } else if (std::islower(*str) || std::isspace(*str)) {
            isWord = false;
        }

        str++;
    }

    return count;
}

unsigned int faStr3(const char* str) {
    unsigned int count = 0;
    unsigned int sum = 0;
    bool isWord = false;

    while (*str != '\0') {
        if (std::isalpha(*str)) {
            if (!isWord) {
                isWord = true;
                count++;
            }
        } else if (!std::isspace(*str)) {
            isWord = false;
        }

        if (isWord) {
            sum++;
        }

        str++;
    }

    if (count == 0) {
        return 0;
    }

    return (sum + count - 1) / count;
}
