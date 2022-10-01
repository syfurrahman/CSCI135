/**
    @file checkerboard3x3.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 8.6
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 G
Write a program checkerboard3x3.cpp that asks the user to input width and height and prints a checkerboard of 3-by-3 squares.
 (It should work even if the input dimensions are not a multiple of three.)
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
   cout << "Shape: " << endl;

   for ( i = 0; i < height; i++) {

       for ( j = 0; j < width; j++) {

           if (((((i/3)%2==1)&&((j%3)%2==1)) || (((i/3)%2==0)&& ((j/3)%2==0)))) {

               cout << '*';
           }
           else{

               cout << " ";

           }
       } 
       cout << endl;
   }

}
/* Copyright 2022 Syfur Rahman */