// Copyright 2022 UNN-IASR

#include <cctype>
#include "fun.h"

unsigned int faStr1(const char* str) {
    int wordCount = 0;
    int alphaCount = 0;
    int digitCount = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            digitCount += 1;
        }
        if (isalpha(str[i])) {
            alphaCount += 1;
        }
        if (isspace(str[i])) {
            if (digitCount == 0 && alphaCount > 0) {
                wordCount++;
            }
            alphaCount = 0;
            digitCount = 0;
        }
    }
    return wordCount;
}

unsigned int faStr2(const char* str) {
    int capitalCount = 0;
    int alphaCount = 0;
    int punctCount = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i]) && alphaCount == 0) {
            alphaCount = 1;
        }
        if (isdigit(str[i]) || ispunct(str[i])) {
            punctCount += 1;
        }
        if (isspace(str[i])) {
            if (punctCount == 0 && alphaCount == 1) {
                capitalCount++;
            }
            alphaCount = 0;
            punctCount = 0;
        }
    }
    return capitalCount;
}

unsigned int faStr3(const char* str) {
    int wordCount = 0;
    int alphaCount = 0;
    int charCount = 0;
    float average = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            charCount++;
            wordCount = 1;
        }
        if (isspace(str[i]) && wordCount == 1) {
            alphaCount++;
            wordCount = 0;
        }
    }
    if (wordCount == 1) {
        alphaCount++;
    }
    average = static_cast<double>(charCount) / alphaCount;
    return round(average);
}
