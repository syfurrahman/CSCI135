/**
    @file trapezoid.cpp
    @author Syfur Rahman
    @date 2022-09-29
    @version 8.5
*/


/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment:  Lab 4 F
Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.
However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!
*/

#include<iostream>
using namespace std;
int main()
{
//Declaring variables
int width,height,i,j,s,space;
  
//Reading inputs from user
cout<<"Input width: " << endl;
cin>>width;
cout<<"Input height: " << endl;
cin>>height;
if(width%2==0 && height>width/2) //Width is even
{
cout<<"Impossible shape!";
}
else if(width%2!=0 && height>(width/2+1)) //Width id odd
{
cout<<"Impossible shape!";
}
else
{
space=0;
//Loop to count height
for(i=1;i<=height;i++)
{
//Loop to print spaces
for(s=0;s<space;s++)
cout<<" ";

//Loop to print *s   
for(j=1;j<=width;j++)
cout<<"*";

//Changing line after printing each line of *s   
cout<<endl;

//Decreasing width by 2
width=width-2;
  
//Increasing left space by 1
space++;

}
}
}

/* Copyright 2022 Syfur Rahman */