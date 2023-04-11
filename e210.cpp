/**
    @file e210.cpp
    @author Syfur Rahman
    @date 2022-08-25
    @version 1.2
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Homework E2.10
Write a program that asks the user to input
Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>

using namespace std;

int main()
{
    double a,b,c,costper100, maxdistance;
    cout << "The number of gallons of gas in the tank: ";
    cin >> a;
    cout << "The fuel efficiency in miles per gallon: ";
    cin >> b;
    cout << "The price of gas per gallon: ";
    cin >> c;

costper100 = 100 / b * c;

cout << costper100 << endl;

maxdistance = b * a; 

cout << maxdistance << endl;
    return 0;
}

/* Copyright 2022 Syfur Rahman */