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

int i = 0; 
int j = 1; 

string s;

while (getline(cin,s,';')) {
	for (int k = 0; k < s.length(); k++) {
		if (s[k] == 'R' && maze[i][j+1] == 0) {
			maze[i][j++];
		} else if (s[k] == 'L' && maze[i][j-1] == 0) {
			maze[i][j--];
		} else if(s[k] == 'U' && maze[i-1][j] == 0) {
			maze[i--][j];
		} else if (s[k] == 'D' && maze[i+1][j] == 0) {
			maze[i++][j];
		}}
		
		if(i == 4 && j == 5) {
			cout << "You got out of the maze." << endl;
		} else{
			cout << "You are stuck in the maze." << endl;
		}

	int i = 0;
	int j = 1;
}

return 0;

}
