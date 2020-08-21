/**
 * @author ChrisMCodes
 * Last update: 2020-08-20
 * 
 * Purpose: Just trying to make sure I understand pointers
 * */

#include <iostream>

int main() {
    int i = rand();
    int * p = &i;

    std::cout << "I've initialized a variable, i, to a random number." << std::endl;
    std::cout << "I then initialized a pointer variable, p, to the address in memory of i." << std::endl;
    std::cout << "Let's see if we can see the values of i and p:" << std::endl << std::endl;
    std::cout << "i = " << i << "; p = " << p << std::endl << std::endl;

    std::cout << "Now I'm setting a new variable, value_i to *p, which should equal i:" << std::endl;
    int value_i = *p;
    std::cout << "value_i = " << value_i << std::endl << std::endl;

    std::cout << "Now I'm changing the value of *p to 11. Let's see what this does to the values of each:" << std::endl;
    *p = 11;
    std::cout << "i = " << i << "; p = " << p << "; value_i = " << value_i << std::endl << std::endl;

    std::cout << "Hopefully, this gave us more insight on how pointers work!" << std::endl;
    return 0;
}