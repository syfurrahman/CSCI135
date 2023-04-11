/**
    @file labquiz04.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 9
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab Quiz 4
Write a program checkerboard.cpp that asks the user to input width and height and 
prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
*/
 
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
ifstream file;


file.open("data.txt");
if(!file.is_open())
{
cout<<"Unable to open the file."<<endl;
return 0;
}
 
string line;
while(getline(file, line))
{
cout<<line<<endl;
}
 
           file.close();
return 0;
}

/* Copyright 2022 Syfur Rahman */
 