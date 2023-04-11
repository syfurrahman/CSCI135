/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab Quiz 08
Lab Quiz 08 about the brackets
Brackets define int unbalanced_brackets(string input), return the difference between open curly brackets and 
closed curly brackets. For example, given "{}}}", return -2.
*/
#include <iostream>
#include <string>
using namespace std;

int unbalanced_brackets(string input) {
    int count = 0;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == '{') {
            count++;
        } else if(input[i] == '}') {
            count--;
        }
    }

    return count;
}

int main() {
    string input;

    cout << "Enter brackets: ";
    cin >> input;

    cout << unbalanced_brackets(input);
}