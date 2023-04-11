/**
    @file e48.cpp
    @author Syfur Rahman
    @date 2022-09-19
    @version 6.2
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  e4.8 homework
Prints each letter or number in each line
*/


#include <iostream>
  
using namespace std;
  
int main()
{
   string ip;
   cout << "Enter a word: ";
   cin >> ip;
   unsigned long k;
    for (k=0;k<ip.size();++k) {
    cout << ip[k] << endl;
}
   return 0;
}

/* Copyright 2022 Syfur Rahman */