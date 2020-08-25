/**
 * Trying to solve this heap memory puzzle from 
 * the University of Illinois's course "Object-Oriented Data Structures in C++"
 * 
 * */

#include <iostream>
using namespace std;

int main() {
    int *p, *q; // stack variables
    p = new int; // heap variable
    q = p; 
    *q = 8;

    cout << *p << endl; // should return 8

    q = new int;
    *q = 9;
    cout << *p << endl; // hasn't been re-referenced, so should return 8
    cout << *q << endl; // now 9


    /**
     * 
     * Here's another puzzle!
     * */

    int *x;
    int size = 3;
    x = new int[size]; // heap array of size 3

    for (int i = 0; i < size; i++) {
        x[i] = i + 3;
        cout << x[i] << endl;
    }

    delete[] x;

    int *a;
    a = new int;
    *a = 0;
    cout << a;

    return 0;
}