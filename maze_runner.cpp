/**
    @file maze_runner.cpp
    @author Syfur Rahman
    @date 2022-09-22
    @version 7
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Project 1 Task B
Create a file called maze_runner.cpp that will implement the two sub-tasks below:
With the maze being provided, we want to stream in a list of directions as to determine whether or not it correctly traverses the maze.
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

    while (cin >> s) { // While the reading operation is a success
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