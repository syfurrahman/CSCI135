/**
    @file month.cpp
    @author Syfur Rahman
    @date 2022-08-29
    @version 2.3
*/

/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab1D leap.cpp
Write a program month.cpp that asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). 
You may not use switch case or arrays even if you know these language constructs.
*/



#include <iostream>

using namespace std;

int main()
{
    int year, month; 
    cout << " Enter the year number: ";
    cin >> year;
    cout << "Enter a month: ";
    cin >> month;

    if (month == 2 ) {

        if (year % 4 !=0) {

            cout << "28" << endl;

        } else if (year % 100 != 0) { 

            cout << "29" << endl;

        } else if (year % 400 != 0) {

            cout << "28" << endl; 

        } else {

            cout << "29" << endl;
        }
    } else if  ((month == 1) || (month == 3) || (month == 5) || (month == 7) ||(month == 8) ||(month == 10) ||(month == 12)) {

        cout << "31" << endl;

    } else {

        cout << "30" << endl;
    }
    return 0;
    }


/* Copyright 2022 Syfur Rahman */