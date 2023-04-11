/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 12 D
Write a program called pairwise.cpp that implements 
the function vector<int> sumPairWise(const vector<int> &v1, 
const vector<int> &v2) that returns a vector of integers whose
elements are the pairwise sum of the elements from the two vectors passed as arguments.
If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0. Example:
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2) {

    vector<int> result;

    int larger;

    if(v1.size() < v2.size()) {

        larger = v2.size(); 

        for(int i = v1.size(); i < v2.size(); i++) {
        v1.push_back(0);

        }

    } else {

    larger = v1.size();

    for(int i = v2.size(); i < v1.size(); i++) {
        v2.push_back(0);
    }

    }

     for(int i = 0; i < larger; i++) {

       result.push_back(v1[i] + v2[i]);

    }
    return result;
}

int main() { 

    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    vector<int> result;

    result = sumPairWise(v1,v2);
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}