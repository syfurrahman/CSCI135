/**
    @file direction_reader.cpp
    @author Syfur Rahman
    @date 2022-09-19
    @version 5
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Project 1 Task A
Create a file called direction_reader.cpp that reads a sequence of letters from cin and 
prints out its corresponding direction.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    char s;
    while(cin >> s) { // While the reading operation is a success
        if( s == 'R') {
            cout << "Right" << endl;
        } 
        else if (s == 'L') {
            cout << "Left" << endl;
        } 
        else if (s == 'U') {
            cout << "Up" << endl; 
        } else {
            cout << "Down" << endl;
        }
    }

    return 0;
}

/* Copyright 2022 Syfur Rahman */