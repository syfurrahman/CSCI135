/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Homework E5.15

Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to arrange them in sorted order. For example,
int v = 3;
int w = 4;
int x = 1;
sort3(v, w, x); // v is now 1, w is now 3, x is now 4

*/
#include <iostream>
#include <cmath>
using namespace std;
void sort3(int& a, int& b, int& c);

int main()
{
    int a;
    cout << " Enter a: " << endl;
    cin >> a;
    int b;
    cout << "Enter b: " << endl;
    cin >> b; 
    int c;
    cout << "Enter c: " << endl;
    cin >> c;
    sort3(a, b, c);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}

void sort3(int& a, int& b, int& c)
{
 
   if(a > b) {
   int temp = a;
   a = b;
   b = temp;
   }
   if(a > c) {
    int temp = a;
    a = c;
    c = temp;
   } 
   if(b > c) {
       int temp = b;
       b = c;
       c = temp;
   }
}
/* Copyright 2022 Syfur Rahman */