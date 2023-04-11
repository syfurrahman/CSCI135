/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 12 B
Make a program called optimism.cpp that implements the function
vector<int> goodVibes(const vector<int>& v); that, given a vector of integers,
returns a vector with only the positive integers in the same order.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> goodVibes(vector<int> v) {
    vector <int> result;
    int i;
    for (int i = 0; i < v.size(); i++) {
        if ( v[i] > 0) {
            result.push_back(v[i]);
        }
    } return result;
}



int main() {
    vector<int> v{1,2,-1,3,4,-1,6};
    vector<int>result = goodVibes(v);

     for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}