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

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    string date;
    double eastSt, eastEl,westSt, westEl;

    double min = 700;
    double max = 0;





ifstream fin("Current_Reservoir_Levels.tsv");

if (fin.fail()) {

    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file

}

string junk;        // new string variable
getline(fin, junk);

//string date1;
//cout  << " Enter date " << endl;
//cin >> date1;

string startDate, endDate;
cout << "Enter the start date: " << endl;
cin >> startDate;
cout << "Enter the end date: " << endl;
cin >> endDate;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    if (date >= startDate && date <= endDate)

    if (eastSt > max) {
        max = eastSt;
    }
    if(eastSt < min) {
        min = eastSt;
    }
    // for example, to print the date and East basin storage:
    //if(date1 == date) {
        //cout << eastSt << endl;
   // }
}

fin.close();

cout << "minimum storage in East basin:"<< min << endl;
cout << "MAXimum storage in East basin: " << max << endl;


}

/* Copyright 2022 Syfur Rahman */