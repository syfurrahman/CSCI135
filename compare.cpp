/**
    @file labquiz03.cpp
    @author Syfur Rahman
    @date 2022-09-19
    @version 6.2
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab quiz 3
Prints each number in each line from 1 to 10
*/


#include <fstream>
#include <cstdlib>
#include <climits>

#include <iostream>
  
using namespace std;
  
int main()
{
   ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string junk;        // new string variable
getline(fin, junk); // read one line from the file 
double eastSt,eastEl,westSt, westEl;
string date;
string firstDate;
cout << "Enter starting day" << endl;
cin >> firstDate;
string secondDate;
cout << "Enter ending day" << endl;
cin >> secondDate;
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    if (date >= firstDate && date <= secondDate) {
        if(eastEl == westEl) {
            cout << date << " " << "Equal" << endl;
        } else if (eastEl > westEl) {
            cout << date << " " << "East" << endl;
        } else if (westEl > eastEl) {
             cout << date << " " << "West" << endl;
        }
    }
}

fin.close();


   return 0;
} 
/* Copyright 2022 Syfur Rahman */