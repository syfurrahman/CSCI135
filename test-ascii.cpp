/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 6 Task A 

Write a program test-ascii.cpp that asks the user to input a line of text 
(which may possibly include spaces). The program should report all characters 
from the input line together with their ASCII codes.

*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Enter text: " << endl;
    getline(cin, text);
    for(int i = 0; i < text.size(); i++ ) {
        cout << text[i] << " "<< int(text[i]) << endl;
    }
    return 0;
}
