/**
    @file edit-interval.cpp
    @author Syfur Rahman
    @date 2022-09-10
    @version 3.2
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 2 C
Write a program edit-array.cpp that creates an array of 10 integers, 
and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:
*/

#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int i,v;

    int myData[10];
    for (int j = 0; j < 10; j++)
    {
        myData[j] = 1;
    }

    do {
        for (int k = 0; k < 10; k++)
        {
            cout << myData[k] << " ";
        }
        cout << endl;
        cout << "Input index: ";
        cin >> i;
        cout << "Input value: ";
        cin >> v;
        if (i >= 0 && i < 10){
            myData[i] = v;
        } 
    }while (i >= 0 && i < 10);
    cout << "Index out of range. Exit. " << endl;
}

/* Copyright 2022 Syfur Rahman */