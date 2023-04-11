/**
@file labquiz06.cpp
@author Gaurav Banepali
@date 2022-10-17
@version 10

*/

/*
Author: Syfur Rahman
Course: CSCI-135
labquiz06.cpp

Define a function, max3, that takes three integers, a, b, and c, and then
returns the maximum of the three.

*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    } else if(b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    int result = max3(a, b, c);
    cout << result << endl;
}



/* Copyright 2022 Syfur Rahman*/