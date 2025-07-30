// Problem Statement
// Write a program that checks if a number entered by the user is even or odd.

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int n;
    cin>> n;
    if(n%2==0){
        cout<<n<<" is an even number.";
    }else{
        cout<<n<<" is an odd number.";
    }
    return 0;
}
