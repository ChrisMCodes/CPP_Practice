/**
 * @author ChrisMCodes
 * 
 * Latest update: 2020-08-17
 * 
 * Purpose: Trying to learn C++ for the Object-Oriented Data Structures in C++ course on Coursera.
 * This program returns the area and volume of a triangle when the radius is given.
 * 
 * Class file for Circle object class
 * */

#include "Circle.h"

double Circle::getCircumference(){
    return 2 * radius_ * 3.141592654;
}

double Circle::getArea() {
    return radius_ * radius_ * 3.141592654;
}

void Circle::setRadius(double r) {
    radius_ = r;
}

