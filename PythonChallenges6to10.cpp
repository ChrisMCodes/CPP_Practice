#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

long power(int x, int y) {
    return pow(x, y);
}

void decimalPart(double num) {
    int whole = (int) num / 1;
    double remaining = num - whole;
    printf("%.2f\n", remaining);
}

void FizzBuzz(int max) {
    for (int i = 1; i <= max; i++) {
        if (i % 15 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int numDigits(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            count++;
        }
    }
    return count;
}

bool sumPosDiv(int num) {
    int total = 0;
    for (int i = 1; i < (num / 2) + 1; i++) {
        if (num % i == 0) {
            total++;
        }
        if (total > num) {
            return false;
        }
    }
    if (total == num) {
        return true;
    }
    return false;
}


int main() {
    	cout << power(4, 3) << endl;
		decimalPart(4.13215);
		FizzBuzz(15);
		cout << numDigits("Th3 d4y 15 h3r3") << endl;
		cout << sumPosDiv(14) << endl;
    return 0;
}
