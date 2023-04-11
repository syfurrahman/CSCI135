/**
    @file smaller.cpp
    @author Syfur Rahman
    @date 2022-08-29
    @version 2
*/

/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab1A smaller.cpp
Write a program smaller.cpp that asks the user to input two 
integer numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    cout <<"Enter two number's" << endl;
    cin >> age1 >> age2;
    
    if(age1 < age2){
        cout << "this is the smaller value: " << age1 << endl;
    } else { cout <<  "this is the smaller value: " << age2 << endl;

}
}


/* Copyright 2022 Syfur Rahman */