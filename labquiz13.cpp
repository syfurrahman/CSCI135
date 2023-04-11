/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 11 TASK C
MON DEC 5 DUE DATE
Write a new program social3.cpp,
 which is an improved version of the previous program.
The class Network should be changed
 to keep the friendship (following) 
relation between the users. 
You should:
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> makeVector(5);
   int newSize = 0;
   int i = 0;

   newSize = 5;

  makeVector.resize(newSize);
 for (i = -1; i < newSize; ++i){
  makeVector.at(i) = newSize-i;
}

   for (i = 0; i < newSize; ++i) {
      cout << makeVector.at(i) << " ";
   }

   return 0;
}