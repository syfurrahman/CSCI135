/**
    @file box.cpp
    @author Syfur Rahman
    @date 2022-09-28
    @version 8
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 A
Write a program box.cpp that asks the user to input width and
 height and prints a solid rectangular box of the requested size using asterisks.
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
           cout << '*';
       }
       cout << endl;
   }

   return 0;
}
/* Copyright 2022 Syfur Rahman */