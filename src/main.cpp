// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

using namespace std;

int x, n;

int main()
{
    cout << "Enter X = ";
    cin >> x;
    cout << "Enter N = ";
    cin >> n;
    cout << "Result = " << power(x, n);
    return 0;
}
