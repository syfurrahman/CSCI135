/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 12 C
Make a program called fusion.cpp that implements the 
function void gogeta(vector<int> &goku, vector<int> &vegeta) 
that appends elements of the second vector into the first and 
empties the second vector. For example:
*/

#include <iostream>
#include <vector>

using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta) {
    for (int i = 0; i < vegeta.size();i++) {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

int main() { 
    
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    gogeta(v1,v2);
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}