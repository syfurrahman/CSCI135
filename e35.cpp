/**
    @file e35.cpp
    @author Syfur Rahman
    @date 2022-09-19
    @version 6
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  e3.5 homework

*/

#include <iostream>
  
using namespace std;
  
int main()
{
// Reads the numbers
   signed long num1,num2,num3;
   cout << "Enter the first number: " << endl;
   cin >> num1;
   cout << "Enter the second number: " << endl;
   cin >> num2;
   cout << "Enter the third number: " << endl;
   cin >> num3;

// If statements to check if the numbers are increasing or decreasing or neither 

    if (num1 > num2 == true && num2 > num3 == true) {

        cout << "decreasing \n";

    } else if (num1 < num2 == true && num2 < num3 == true ) {
        cout << "increasing \n";
    } else {
        cout << "neither \n";
    }

   return 0;
}

/* Copyright 2022 Syfur Rahman */