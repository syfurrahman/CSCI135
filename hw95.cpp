/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: HW 9.5
Implement a class Rectangle. Provide a constructor to construct a 
rectangle with a given width and height, member functions get_perimeter and get_area
that compute the perimeter and area, and a member function void resize(double factor) 
that resizes the rectangle by multiplying the width and height by the given factor.
*/

#include <iostream>
#include <string>
#include<stdio.h>
#include<ctype.h>

using namespace std;


class Rectangle
{
public:
// constructor that takes in width and height as parameters
Rectangle(double width, double height)
{
this->width = width;
this->height = height;
}

// member function that returns the perimeter of the rectangle
double get_perimeter()
{
    return 2 * (width + height);
}

// member function that returns the area of the rectangle
double get_area()
{
    return width * height;
}

// member function that resizes the rectangle by multiplying the width and height by the given factor
void resize(double factor)
{
    width *= factor;
    height *= factor;
}
private:
double width;
double height;
};

int main() {
double width, height;
cout << "Enter the width" << endl;
cin >> width;
cout << "Enter the height" << endl;
cin >> height;
// create a rectangle with width 5 and height 10
Rectangle rectangle(width, height);

// print the perimeter of the rectangle
cout << "Perimeter: " << rectangle.get_perimeter() << endl;

// print the area of the rectangle
cout << "Area: " << rectangle.get_area() << endl;

// resize the rectangle by a factor of 2
rectangle.resize(2);

// print the perimeter and area of the resized rectangle
cout << "Perimeter after resizing: " << rectangle.get_perimeter() << endl;
cout << "Area after resizing: " << rectangle.get_area() << endl;

return 0;
}
