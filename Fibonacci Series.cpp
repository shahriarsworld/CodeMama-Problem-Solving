// Problem Statement
// Write a program to print fibonacci series.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a = 0, b = 1;

    for (int i = 0; i < N; ++i) {
        cout << a;
        if (i < N - 1) cout << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << '\n';
    return 0;
}
