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

bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int a, int b);
bool isTwinPrime(int n);
int nextTwinPrime(int n);
int largestTwinPrime(int a, int b);

int main() {

int a, b;

cout << "Enter a: " << endl; 
cin >> a;
cout << "Enter b: " << endl; 
cin >> b;

cout << largestTwinPrime( a, b);

}

//int largestTwinPrime(int a, int b);
int largestTwinPrime(int a, int b) {
    int answer=0;
    if (b < 5) return -1;
    // A twin prime is odd, so go over odd values.
    if (b %2 == 0) b--; 
    for(int i = b; i >= a; i-=2){
            if(isTwinPrime(i))
                return i;
    }
    return -1;
}

//int nextTwinPrime(int n);
 int nextTwinPrime(int n) {
     int i = n+1;
     while(!isTwinPrime(i)) {
         i++;
          }
          return i;
     }

//bool isTwinPrime(int n);
bool isTwinPrime(int n) {
    if(isPrime(n) == true) {
        if ((isPrime(n-2) == true) || (isPrime(n+2) == true)) {
            return true;
        }
    }
    return false;
}

//int countPrimes(int a, int b);
int countPrimes(int a, int b) {
   int count = 0;
   for (int i = a ; i <= b; i++) {
       if(isPrime(i) == true) {
           count++;
       }
   } 
   return count;
} 
//int nextPrime(int n);

int nextPrime(int n) {
    
 
    // Base case
    if (n <= 1)
        return 2;
 
    int prime = n;
    bool found = false;
 
    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}

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

/* Copyright 2022 Syfur Rahman */