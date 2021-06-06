#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int sumNum(int a, int b, int c) {
    /* returns sum of three arguments */
    printf("%d\n", a + b + c);
    return a + b + c;
}

double sqrtNum(int num) {
    printf("%.3f\n", sqrt(num));
    return sqrt(num);
}

void printQuotRem(int num1, int num2) {
    printf("Quotient: %.2f\n", 1.0 * num1/num2);
    printf("Remainder: %d\n", num1 % num2);
}

string evenOrOdd(int num) {
    if (num % 2 == 0) {
        printf("Even\n");
        return "Even";
    }
    printf("Odd\n");
    return "Odd";
}

void printFactors(int num) {
    for (int i = 0; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}

int main()
{
    sumNum(12, 13, 14);
    sqrtNum(45);
    printQuotRem(177, 175);
    evenOrOdd(200);
    evenOrOdd(201);
    printFactors(27);
    
    /*
     * coming back to this for optimizations and comments
     */
    
    return 0;
}
