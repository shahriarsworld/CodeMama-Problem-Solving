// Problem Statement
// Suppose, you work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Write a program which will calculate how many complete toy cars can be made, given the total number of wheels, car bodies and figures available.
#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int w,c,f;
    cin>> w >> c >> f;
    int maxCars = min({w/4, c, f/2});
    cout<<maxCars;
    return 0;
}
