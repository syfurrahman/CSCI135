/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Project 1 Task D
Write a program maze_runner_modded.cpp that can stream in a 
maze and set up the array then take in directions to see if they can traverse the custom maze.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int maze[10][10];
    int sR, sC, eR, eC, r, c;

    
    for(int r = 0; r < 10; r++) {
        for(int c = 0; c < 10; c++) {
            cin >> maze[r][c];
        }
    }

    
    cin >> sR >> sC >> eR >> eC;
    r = sR; 
    c = sC; 

    string directions;
    while(directions != ";") {
        cin >> directions;
    }

    string s;
    while(cin >> s) {
        string arr[s.size()];

        for(int i = 0; i < s.size(); i++) {
            arr[i] = s[i];
        }
        
        for(string i: arr) { 
            if(i == ";") {
                if(r == eR && c == eC) {
                    cout << "You got out of the maze." << endl;
                } else {
                    cout << "You are stuck in the maze." << endl;
                }

                r = sR;
                c = sC;
            }           

            if(i == "R" && maze[r][c + 1] != 1) {
                c++;
            } else if(i == "L" && maze[r][c - 1] != 1) {
                c--;
            } else if(i == "U" && maze[r - 1][c] != 1) {
                r--;
            } else if(i == "D" && maze[r + 1][c] != 1) {
                r++;
            } else {
                r = r;
                c = c;
            }
        }
    }
}