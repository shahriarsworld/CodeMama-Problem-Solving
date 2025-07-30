// Problem Statement
// Write a program to calculate the bonus of salary where bonus is the 10% of main salary. Although input is double type number, output will be an integer number.

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    double n;
    int total;
    cin>> n;
    total = (n * 10)/100;
    cout<<total<<endl;

    return 0;
}
