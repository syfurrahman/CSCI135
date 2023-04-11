/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 6 Task C 

Write a program vigenere.cpp. 
It should contain a function encryptVigenere implementing this cipher:

*/
#include <iostream>

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


string encryptVigenere(string plaintext, string keyword) {
    int j = 0;
    string ciphertext = "";
    for (int i = 0; i < plaintext.length(); i++) {
        if(isalpha(plaintext[i])) {
        ciphertext = ciphertext + shiftChar(plaintext[i],keyword[j]-97); 
        j++;
         if (j == keyword.length()) {
             j= 0;
         }

        } else {
        ciphertext = ciphertext + plaintext[i];
            if (j == keyword.length()) {
            j = 0;
        }
        }
    } 
    return ciphertext;
}  


int main () {
    string text;
    cout << "Enter plaintext: "<< endl;
    getline(cin, text);
    string word;
    cout << "Enter the keyword: "<< endl;
    getline(cin, word);
    encryptVigenere(text, word);

}