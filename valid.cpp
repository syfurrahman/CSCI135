/**
    @file valid.cpp
    @author Syfur Rahman
    @date 2022-09-08
    @version 3
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 2 A
Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n;
    cout << " Enter a integer from 0 to 100: " << endl;
    cin >> n;
    
    while ( n < 1 || n > 99 ) {
        cout << "Please re-enter the number: " << endl;
        cin >> n;
    } 
    int result = pow(n,2);

    
    cout << "Number squared is " << result << endl;

    return 0;



    }





/* Copyright 2022 Syfur Rahman */