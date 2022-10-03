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
Assignment:  Lab 5 Task A,B,C,D,E,F,G
N is a prime if and only if it is not divisible evenly by any of the numbers from 2 to N−1. 
Let’s implement this decision as a function.
*/

#include <iostream>
  
using namespace std;

//bool isPrime(int n);
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        } 
    } 
    return true;
}

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
//cout << "Enter d: " << endl; 
//cin >> d;

cout << isPrime( n)  << endl;

}

/* Copyright 2022 Syfur Rahman */