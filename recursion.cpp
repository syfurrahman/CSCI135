/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 13 D
In the same program, add a new function
bool isAlphanumeric(string s);
which returns true if all characters in the string are
letters and digits, otherwise returns false.
A usage example:
cout << isAlphanumeric("ABCD") << endl;        // true (1)
cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
The logic is similar to the sumRange function:
*/

#include <iostream>
#include <string>
#include<stdio.h>
#include<ctype.h>
using namespace std;


void printRange(int left, int right) {
    if (left == right) {
        cout << left << " ";
    } else if (left < right) {
        cout << left << " ";
        printRange(left+1, right);
    }
}

int sumRange(int left, int right) {
    int sum;
   if (left > right) {
       return 0;
   } else if (left <= right) {
       return left + sumRange(left + 1, right);
   }
   return 0;
}

int sumArray(int *arr, int size) {
    if (size == 1) { 
        return arr[0];
    }
    return arr[size -1]+sumArray(arr, size-1);
}

bool isAlphanumeric(string s) {
    if (s.empty()) {
        return true;
    }
    if(!isalnum(s[0])){

        return false;
    }
    return isAlphanumeric(s.substr(1, s.length()-1));
}

int main() {

cout << isAlphanumeric("ABCD") << endl;        // true (1)
cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
cout << isAlphanumeric("KLMN 8-7-6") << endl;
}