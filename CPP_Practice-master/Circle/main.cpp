/**
 * @author ChrisMCodes
 * 
 * Latest update: 2020-08-17
 * 
 * Purpose: Trying to learn C++ for the Object-Oriented Data Structures in C++ course on Coursera.
 * This program returns the area and volume of a triangle when the radius is given.
 * 
 * Driver file for Circle object class
 * */

#include <iostream>
#include "Circle.h"
#include "Circle.cpp"

using std::cout;
using std::endl;

int main() {
    Circle c;


    c.setRadius(7.89);
    double a = c.getArea();
    double circum = c.getCircumference();

    cout << "The area of this circle is " << a << endl;
    cout << "The circumference of this circle is " << circum << endl;

    return 0;
}