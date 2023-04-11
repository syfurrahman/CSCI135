/**
    @file e31.cpp
    @author Syfur Rahman
    @date 2022-09-19
    @version 6.1
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  e3.1 homework
Write a program that reads an integer and prints whether it is 
negative, zero, or positive.
*/


#include <iostream>
  
using namespace std;
  
int main()
{
   signed long number;
   cout << "Enter a number/ entrar un número: "<< endl;
   cin >> number;
   if (number > 0) {
       cout << "Positive \n";
   } else if (number < 0) {
       cout << "Negative \n";
   } else {
       cout << "Zero \n";}
   return 0;
}

/* Copyright 2022 Syfur Rahman */