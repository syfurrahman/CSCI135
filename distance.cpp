/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Homework E7.16
Homework E7.16
Define a structure Point. A point has an x­ and a y­coordinate.
Write a function double distance(Point a, Point b) that computes the 
distance from a to b. Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

struct Point {

  float x;

  float y;
};

double distance(Point a, Point b)  {
  double d;

  d = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) * 1.0);
  //d = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

  return d;
}

int main(){

  struct Point a, b;

  cout << "Enter the first x" << endl;
  cin >> a.x;
  cout << "Enter the first y" << endl;
  cin >> a.y;
  cout << "Enter the second x" << endl;
  cin >> b.x;
  cout << "Enter the second y" << endl;
  cin >> b.y;

   cout << distance(a,b) << endl;

   return 0;

}