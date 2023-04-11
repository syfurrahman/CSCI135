/*
Author: Syfur Rahman
Course: CSCI-135
labquiz06.cpp

Define a function, max3, that takes three integers, a, b, and c, and then
returns the maximum of the three.

*/
#include <iostream>
using namespace std;

void remove_e(string &sentence) {
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == 'e') {
            sentence.erase(i, 1);
        }
    }
}