/*
Author: Syfur Rahman
Course: CSCI-136
Instructor: Lola Samigjonova
Assignment: Lab7 B
indents in a flie.
Lab7 B.
This program indents a file and returns the output.
This is LAB7 Part B.
This was created on March 22
at 3:25 PM at Hunter College 1001C
*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line);
int countChar(string line, char c);
void indent(string text);
  
int main(){

    string bad_text;
    indent(bad_text);

    return 0;
}

int countChar(string line, char c) {
    int count = 0; 
    for (int i = 0; i < line.length(); i++) {
        if(line[i] == c) {
             count += 1;
        }
    }
    return count;
}

void indent(string text) {
    string new_text;
    int opening = 0;
    int closing = 0;
    int blocks = 0;
    int indentation;

    while (getline(cin, text)) {
        new_text = removeLeadingSpaces(text);
        indentation = blocks;
        if(new_text[0] == '}') {
            indentation = blocks -1;
        }
        for (int j = 0; j < indentation; j++) {
            cout << "\t";
        }
        opening = countChar(new_text, '{');
        closing = countChar(new_text, '}');
        blocks = blocks + (opening-closing);
        cout << new_text << endl;
    }
}

string removeLeadingSpaces(string line) {
    string new_text = "";
    bool space_not_found=false;

    for(int i = 0; i < line.length(); i++) {
        if (!isspace(line[i])) {
            space_not_found = true; }
        if (space_not_found == true) {
            new_text = new_text + line[i];
        }
    } return new_text;

}
