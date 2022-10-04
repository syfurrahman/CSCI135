/**
    @file print-interval.cpp
    @author Syfur Rahman
    @date 2022-09-08
    @version 3.1
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 2 B
Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces.
Notice that we include the lower limit, but exclude the upper limit.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int L, U;
    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;

    for(int i = L; i < U; i++) {
        cout << i << endl;
    // the body of the loop will get executed for 
    // all values of i starting at L
    // and ending at the largest integer less than U

}

    return 0;



    }





/* Copyright 2022 Syfur Rahman */