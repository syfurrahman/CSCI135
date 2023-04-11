/**
    @file smaller3.cpp
    @author Syfur Rahman
    @date 2022-08-29
    @version 2.1
*/

/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab1B smaller3.cpp
Write a program smaller3.cpp that asks the user to input 
three integer numbers, and prints out the smallest of the three.
*/


#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter the thrid number: ";
    cin >> c;

    if (a>c && b > c)  {
        cout << "The smaller of the three is " << c << endl;
    } 

    else if (a>b && c>b) {
        cout << "The smaller of the three is " << b << endl;
    }
    else if (c>a && b>a) {
        cout << "The smaller of the three is " << a << endl;
    }

    return 0;
}


/* Copyright 2022 Syfur Rahman */