/**
    @file ilove.cpp
    @author Syfur Rahman
    @date 2022-09-12
    @version 4
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Quiz Lab 1
Write a program that asks the user to input
Then print "I love C++"that many time.
*/

#include <iostream>

using namespace std;

int main()
{
    int n; 
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "I love C++" << endl;
    }
    return 0;
}

/* Copyright 2022 Syfur Rahman */