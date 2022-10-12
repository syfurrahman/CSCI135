/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Homework E5.14

Write a function void sort2(int& a, int& b) that swaps the values of a and b if a 
is greater than b and otherwise leaves a and b unchanged. For example,

int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u, v); // u is still 2, v is still 3 sort2(w, x); // w is now 1, x is now 4

*/


#include <iostream>
#include <cmath>
using namespace std;
void sort2(int& a, int& b);

int main()
{
    int a;
    cout << " Enter a: " << endl;
    cin >> a;
    int b;
    cout << "Enter b: " << endl;
    cin >> b; 
    sort2(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void sort2(int& a, int& b)
{
   //not work, after the following two statements,
   //both a and b have b's original value.
   //a = b;
   //b = a;

   //the code to exchange a and b's value
   if(a > b) {
   int temp = a;
   a = b;
   b = temp;
   } 
}




/* Copyright 2022 Syfur Rahman */