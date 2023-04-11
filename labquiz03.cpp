/**
    @file labquiz03.cpp
    @author Syfur Rahman
    @date 2022-09-19
    @version 6.2
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab quiz 3
Prints each number in each line from 1 to 10
*/


#include <iostream>
  
using namespace std;

int main()
{
   int arr[11];

   for (int i=0; i < 11; i++) {
    arr[i] = i;
    cout << arr[i]<< endl;
   }
   return 0;
}

/* Copyright 2022 Syfur Rahman */