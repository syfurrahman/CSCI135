/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 12 A
A big benefit of vectors is their ability to be returned from functions.
sthat returns a vector of n integers that range from 0 to n-1. 
Call your program vectors.cpp. Your function must be implemented outside
the main function and must return a vector.
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> makeVector(int n) {
    vector<int>result;
    for (int i = 0; i < n; i++) {
        result.push_back(i);
    }
    return result;
}

int main() {
    vector<int>result = makeVector(13);

    for(int i = 0; i < sizeof(result); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}