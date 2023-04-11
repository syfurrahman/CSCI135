/**
    @file  labquiz05.cpp
    @author Syfur Rahman
    @date 2022-10-03
    @version 9
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 5 Quiz
Write a program to print the shape
The output is the shape
*/

#include <iostream>
  
using namespace std;

int main() {

int i, j;
   
   for (i = 0; i<6; i++) {
       for (j = 0; j < 5; j++) {
           cout << '+';
       }
       cout << endl;
   }

    return 0;
}

/* Copyright 2022 Syfur Rahman */