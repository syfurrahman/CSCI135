/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab Task A
Before we make a program that indents source code files,
 let’s make a program that unindents them.
Start by writing a function
string removeLeadingSpaces(string line);

*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line);
  
int main(){

    string bad_text;
    while (std::getline(std::cin,bad_text)) { 
        cout << removeLeadingSpaces(bad_text)<< endl;
    } return 0;
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
