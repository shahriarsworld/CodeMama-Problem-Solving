// Problem Statement
// Write a program to create a function that takes two arguments. Both arguments are integers, a and b. Return true if one of them is 10 or if their sum is 10.
#include <bits/stdc++.h>
using namespace std;
     
    void check(int a, int b){      
    if (a == 10 || b == 10 || (a+b) == 10){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    }
    int main() {
        int a,b;
    cin>> a >> b;
    check(a,b);  
    return 0;
}
