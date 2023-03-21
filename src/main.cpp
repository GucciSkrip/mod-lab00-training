// Copyright 2022 UNN-IASR
#include <iostream>

#include "fun.h"

int x, n;

int main() {
    std::cout << "Enter X = ";
    std::cin >> x;
    std::cout << "Enter N = ";
    std::cin >> n;
    std::cout << "Result = " << power(x, n);
    return 0;
}
