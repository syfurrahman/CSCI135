/**
    @file upper.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 8.4
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 E
Write a program upper.cpp that prints the 
top-right half of a square, given the side length.
*/

#include <iostream>
  
using namespace std;
  
int main()
{   
   int i, j, length;
   cout << "Enter the length: " << endl;
   cin >> length;
   for (i = 0; i <=length; i++) {
       for (j = 0; j <= length; j ++) {
           if( i < j) {
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