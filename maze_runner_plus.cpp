/**
    @file maze_runner_plus.cpp
    @author Syfur Rahman
    @date 2022-09-26
    @version 7.1
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Project 1 Task C
Write a better version of the program called maze_runner_plus.cpp that can evaluate multiple direction lists. 
Let’s use the semicolon symbol that must be used at the end of each direction in the input.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   int maze[6][6] = {
   1,0,1,1,1,1,
   1,0,0,0,1,1,
   1,0,1,0,0,1,
   1,0,1,0,1,1,
   1,0,0,0,0,0,
   1,1,1,1,1,1
};

int row = 0;
int scol = 1;
int endrow = 4;
int endcol = 5;

char s;
char n = ';';

    while (cin >> s >> n) { // While the reading operation is a success
       if( s == 'R') {

            maze[row][scol++];
        } 
        else if (s == 'L') {

            maze[row][scol++];
        } 
        else if (s == 'U') {

            maze[row++][scol];

        } else if (s == 'D') {
            
            maze[row--][scol];
        }
    }   
    if(maze[row][scol] ==  maze[endrow][endcol]) {
            cout << "You got out of the maze." << endl;
        } else {
            cout << "You are stuck in the maze." << endl;
        }

        return 0;
}

/* Copyright 2022 Syfur Rahman */