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
#include <string>
using namespace std;

int main() {
    int x,y;
   cout << " Enter the width: " << endl;
   cin >> x;
   cout << "Enter the height: " << endl;
   cin >> y;
   cout << "Shape: " << endl;

    string res = "";
    for (int i = 0; i < y; ++i) {
        for (int j = 0, c = '*'; j < x; ++j, c = '*') {
            if (((j / 3) & 1) ^ ((i / 3) & 1))
                c = ' ';

            res += (char)c;
        }

        res += '\n';
    }

    cout << res;
    cin.ignore();
    return 0;
}
/* Copyright 2022 Syfur Rahman */