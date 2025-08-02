// Problem Statement
// Write a program which returns the number of true values there are in an array.

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        if (value == 1) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
