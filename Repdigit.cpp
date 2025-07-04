// Problem Statement
// Write a program to check whether a number is Repdigit or not. A repdigit is a positive number composed out of the same digit.

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    string n;
    cin>> n;
    bool checkRep = true;
    for(int i = 1; i < n.length(); i++){
        if (n[i] != n[0]){
            checkRep = false;
            break;
        }
    }
    if (checkRep == true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
