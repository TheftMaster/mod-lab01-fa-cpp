// Copyright 2022 UNN-IASR

#include <iostream>
#include "fun.h"

int main() {
    const char* str = "Hello World! 123 Testing 456";

    unsigned int count1 = faStr1(str);
    std::cout << "Number of words without digits: " << count1 << std::endl;

    unsigned int count2 = faStr2(str);
    std::cout << "Num  of wor sta with upp let:" << count2 << std::endl;

    unsigned int avgLength = faStr3(str);
    std::cout << "Average word length: " << avgLength << std::endl;

    return 0;
}
