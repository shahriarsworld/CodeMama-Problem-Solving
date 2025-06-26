// Problem Statement
// For being lazy you are punished to walk on the garden at least 
// N
// N steps. As you mastered laziness, after 
// i
// t
// h
// ith step you take rest for 
// i
// i second(s). You also takes X second(s) to complete each step. Now write a program to calculate the total time to take exactly 
// N
// N steps.

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int n,x;
    cin>> n >> x;
    int time = 0;
    time += n*x;
    for(int i = 0; i < n; i++){
        time += i;
    }
    cout<< time <<endl;
    return 0;
}
