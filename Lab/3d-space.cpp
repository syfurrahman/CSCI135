/*
Author: Syfur Rahman
Course: CSCI-135
Professor: Genady Maryash
Assignment: Lab 9 A, B, C & E
----------------TaskA---------------------------------------------------------
A point in 3D space can be represented using three coordinates. 
In Cartesian coordinate system these coordinates are called (x,y,z), 
describing the position of the point along the three orthogonal axes:
----------------TaskB---------------------------------------------------------
In the same file 3d-space.cpp, add a function
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
Which receives the coordinates of two points (passed as pointers),
and returns the pointer of 
the point that is farther away from the origin.
----------------TaskC---------------------------------------------------------
Let’s consider an object moving in 3D space. We already know how to describe its position. 
(We will be assuming metric system, 
thus distances will be implicitly measured in meters and time in seconds.)

The object’s velocity can be represented in the same 3D coordinate system as its 
displacement per second in the coordinates x, y, and z:

Coord3D vel = {5, -3, 1}; // x, y, z components of the velocity
When moving at constant velocity vel , the object’s new position 
after the elapsed time dt can be computed as
----------------TaskE---------------------------------------------------------

Task E. Creating and deleting objects dynamically

In the program 3d-space.cpp, add functions that create, delete, and coordinate objects dynamically:

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z);

// free memory
void deleteCoord3D(Coord3D *p);
*/

 
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z) {
        Coord3D *p = new Coord3D;

        p -> x = x;
        p -> y = y;
        p -> z = z;

        return p;
}

// free memory
void deleteCoord3D(Coord3D *p) {

    delete p;

}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    ppos -> x=ppos -> x + (pvel -> x * dt);
    ppos -> y=ppos -> y + (pvel -> y * dt);
    ppos -> z=ppos -> z  + (pvel -> z * dt);
}

double length(Coord3D *p) {
    return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    if(length(p1) > length(p2)) {
        return p1;
    } else {
        return p2;
    }
}



int main () {

    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);

}