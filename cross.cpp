/**
    @file cross.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 8.2
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 C
Write a program cross.cpp that asks the user to input the shape size, and
 prints a diagonal cross of that dimension.
*/

#include <iostream>
  
using namespace std;
  
int main()
{   
   int j, i, size;
   cout << "Enter size " << endl;
   cin >> size;
   cout << "Shape: " << endl;
   for ( i = 0; i < size; i++) {
       for ( j = 0; j < size; j++) {
           if ( i ==j || j==size-1-i) {
               cout << "*";
           } else {
               cout << " ";
           }
       }
       cout << endl;
   }
    
   return 0;
}
/* Copyright 2022 Syfur Rahman */