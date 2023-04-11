/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: E7.1 sorting 2 pointers
This program sorts to pointers.
E7.1.
E7.1.
sort2pointers
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void sort2(double* p, double* q);

int main () {
    double x,y;
    cout << "Enter the number for x: " << endl;
    cin >> x;
    cout << "Enter the number for y: " << endl;
    cin >> y;
    sort2(&x, &y);
}

void sort2(double* p, double* q) {
    double temp;
    if(*q < *p) {
        temp = *q;
        *q = *p;
        *p = temp;
    }
}