/**
    @file lower.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 8.3
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 D
Write a program cross.cpp that asks the user to input the shape size, and
 prints a diagonal cross of that dimension.
*/

#include <iostream>
  
using namespace std;
  
int main()
{   
   int i, j, length;
   cout << "Enter the length: " << endl;
   cin >> length;
   for (i = 1; i <=length; i++) {
       for (j = 0; j <= length; j ++) {
           if( i > j) {
               cout << '*';
           }
           else {
           cout << " ";
       }
       } 
       cout << endl;
   }
}

/* Copyright 2022 Syfur Rahman */
