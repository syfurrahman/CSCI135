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

string startDate,endDate,junk,date;

cout << "Enter start date: " << endl;
cin >> startDate;
cout << "Enter end date: " << endl;
cin >> endDate;     // new string variable

getline(fin, junk); 


string date2 [500];
float heights [500];
int index = 0;
double eastSt,eastEl,westSt, westEl;
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    if (date >= startDate && date <= endDate) {
        date2[index] = date;
        heights[index] = westEl;
        index++;
    }

   //fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
    
    // for example, to print the date and East basin storage:
}
for (int i = index; i >= 0; i--) {
        cout << date2[i] << " " << heights[i] << endl;

    } fin.close();

   return 0;
}

/* Copyright 2022 Syfur Rahman */