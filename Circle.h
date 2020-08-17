/**
 * @author ChrisMCodes
 * 
 * Latest update: 2020-08-17
 * 
 * Purpose: Trying to learn C++ for the Object-Oriented Data Structures in C++ course on Coursera.
 * This program returns the area and volume of a triangle when the radius is given.
 * 
 * Header file for Circle object class
 * */

#pragma once

class Circle {

    public:
        double getCircumference();
        double getArea();
        void setRadius(double r);
    
    private:
        double radius_;
};