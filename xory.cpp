/**
    @file xory.cpp
    @author Syfur Rahman
    @date 2022-09-12
    @version 4.1
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Quiz 2
prints the greater number
*/

#include <iostream>

using namespace std;

int main()
{
    int x,y; 
    cout << "Enter num for x" << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;

    if (x > y) {
        cout << x <<endl;
    } else 
        cout << y << endl;
        
    return 0;
}

/* Copyright 2022 Syfur Rahman */