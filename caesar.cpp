/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 6 Task B 

Write a program caesar.cpp with functions implementing Caesar cipher encryption:

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);
The argument rshift is the magnitude of the right shift. 
For the sake of the lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 (although, implementing it correctly for an arbitrary integer shift is also possible, of course).

*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;


char shiftChar (char c, int rshift) {
    char shift;
    if(isupper(c)) { 
        shift = (c - 'A'+rshift)%26+'A';
    } else if (islower(c)) {
        shift =(c - 'a'+rshift)%26+'a';
    } else {
        shift=c;
    }

    return shift;
}

string encryptCaesar(string plaintext, int rshift) {
    string ciphertext = "";
    for(int i = 0; i < plaintext.size(); i++) {
        ciphertext = ciphertext + shiftChar(plaintext[i], rshift); 
    }
    return ciphertext;
}

int main() {
    string text;
    cout << "Enter text: " << endl;
    getline(cin, text);
    int shift;
    cout << "Enter the number of shift: " << endl;
    cin >> shift;

    encryptCaesar(text, shift);
    return 0;
}