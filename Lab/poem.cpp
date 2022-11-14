/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 9 D
Poem.cpp
Task D. Fix the program so that it does not crash your computer:

You are provided with the following program poem.cpp. All is good, and the 
memory is allocated dynamically,
but it crashes your computer, because it runs out of memory really quickly:

Fix this program poem.cpp. It should still keep creating poems, 
but all dynamically allocated memory should get deleted when it is not needed. 
(The program can be stopped with Ctrl+C in the terminal.)

*/

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p;
    }
}