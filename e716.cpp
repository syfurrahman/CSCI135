/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Homework E7.16
Homework E7.16
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

  d = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

  return d;
}

int main(){

  struct Point a, b;

  printf("The coordinates of the point a are: ");
  scanf("%f",&a.x, &a.y);

  printf("\nThe coordinates of the point b are: ");
  scanf("%f",&b.x, &b.y);

   cout << distance(a,b) << endl;

}