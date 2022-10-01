/**
    @file checkerboard.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 8.1
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 B
Write a program checkerboard.cpp that asks the user to input width and height and 
prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
*/

#include <iostream>
  
using namespace std;
  
int main()
{   
   int i, j,width, height;
   cout << " Enter the width: " << endl;
   cin >> width;
   cout << "Enter the height: " << endl;
   cin >> height;
   
   for (i = 0; i<height; i++) {
       for (j = 0; j < width; j++) {
           if ((i % 2 != 0) && (j % 2 != 0)|| (i % 2 == 0)&&(j % 2 == 0)) { 
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