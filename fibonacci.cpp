/**
    @file fibonacci.cpp
    @author Syfur Rahman
    @date 2022-09-10
    @version 3.3
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 2 D
Write a program fibonacci.cpp, which uses an array of ints to compute 
and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // make an array
    int fib[60];
// first two terms are given
    fib[0] = 0;
    fib[1] = 1;
// and all the following ones can be computed iteratively as
    cout << fib[0] << "\n";
    cout << fib[1] << "\n";
    for (int i = 2; i < 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << "\n";
    }
    

    return 0;
}

/* Copyright 2022 Syfur Rahman */