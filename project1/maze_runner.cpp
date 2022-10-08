/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Project 1 Task B
Write a version of the program called maze_runner.cpp that can evaluate multiple direction lists. 
Let’s use the semicolon symbol that must be used at the end of each direction in the input.
*/

#include <iostream>

using namespace std;

#include<string>

int main()

{

string s;

int maze[6][6] = {

1,0,1,1,1,1,

1,0,0,0,1,1,

1,0,1,0,0,1,

1,0,1,0,1,1,

1,0,0,0,0,0,

1,1,1,1,1,1

};

int rw = 0 ,clmn = 1;                      

    while(cin >> s) { 
        if(s == "R" && maze[rw][clmn + 1] == 0) {
            clmn++;
        } else if(s == "L" && maze[rw][clmn - 1] == 0) {
            clmn--;
        } else if(s == "U" && maze[rw - 1][clmn] == 0) {
            rw--;
        } else if(s == "D" && maze[rw + 1][clmn] == 0) {
            rw++;
        } 
    }

if (rw == 4 && clmn == 5) 
cout<<"You got out of the maze." << endl;
else
cout<<"You are stuck in the maze." << endl;

return 0;
}

/* Copyright 2022 Syfur Rahman */