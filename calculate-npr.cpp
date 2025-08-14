// Problem Statement
// Write a program where you will be given values of n and r. You will have to print the values of nPr.

#include <iostream>
using namespace std;
long long factorial(int x) {
    long long result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, r;
    cin >> n >> r;

    if(r > n || r < 0 || n < 0) {
        cout << 0 << endl;  
        return 0;
    }

    long long nPr = 1;
    for (int i = n; i > n - r; i--) {
        nPr *= i;
    }

    cout << nPr << endl;
    return 0;
}
