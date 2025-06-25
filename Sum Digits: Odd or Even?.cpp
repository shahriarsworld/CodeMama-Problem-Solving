// Problem Statement
// Write a program which will determine whether the sum of all the digits of the number is even or odd.
#include <bits/stdc++.h>
using namespace std;
     
int main() {
    /**
    * Write your C++ code from here
    */
    string s;
    cin>> s;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
    sum += s[i] -'0';
    }
    if (sum % 2 == 0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }

    return 0;
}
