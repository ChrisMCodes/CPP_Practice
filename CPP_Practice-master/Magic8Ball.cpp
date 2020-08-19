/**
 * @author ChrisMCodes
 * Last update: 2020-08-18
 * 
 * Purpose: Just a C++ implementation of the same program I wrote in Python.
 * Enter a question and let the magic 8 ball tell you your fortune!
 * */

#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

int main() {
    int i = rand() % 23 + 1;
    char question[100];
    const char *responses[30] = {"It shall be so", "It shall not be so", "It looks likely", "It looks unlikely", "You are in luck", "Your luck will run short", "Absolutely", "Never", "Your wish is my command", "Perhaps you would do better to change your wish", "Of course!", "Of course not!", "It is your lucky day", "Today isn't your day", "The odds are ever in your favor", "You are more likely to be struck by lightning", "Perhaps", "Perhaps not", "If you wish", "Are you sure you do want to ask that?", "Your happiness is ensured", "Don't bet on it"};

    std::cout << "Enter a yes/no question and let the magic 8 ball see your future!" << std::endl;
    std::cin >> question;
    std::cout << responses[i] << std::endl;

    return 0;
}