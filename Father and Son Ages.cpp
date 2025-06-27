// Problem Statement
// Write a program to create a function that takes two arguments: a father's current age fAge and his son's current age sAge.
// Сalculate how many years ago the father was twice as old as his son, or in how many years he will be twice as old.
#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int fAge, sAge;
    cin>> fAge >> sAge;
    cout<< abs(fAge-(sAge*2));
    return 0;
}
