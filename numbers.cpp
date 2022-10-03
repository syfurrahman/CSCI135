/**
    @file numbers.cpp
    @author Syfur Rahman
    @date 2022-10-03
    @version 8
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 5 Task A
Write a program numbers.cpp that defines a function 
bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.
*/

#include <iostream>
  
using namespace std;



//bool isDivisibleBy(int n, int d);
bool isDivisibleBy(int n, int d) {

    if (d ==0) {
        return false;
    }
    else if ( n % d == 0) {
        return true;
    } else {
        return false;
    }
}



int main() {

int n, d;

cout << "Enter n: " << endl; 
cin >> n;
cout << "Enter d: " << endl; 
cin >> d;

cout << isDivisibleBy(n, d) << endl;

}

/* Copyright 2022 Syfur Rahman */