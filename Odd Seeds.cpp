// Problem Statement
// There are 
// N
// N fields numbering 
// 1
// ,
// 2
// ,
// .
// .
// .
// N
// 1,2,...N. Each field grow a number of plants equal to their integer values. You are given two fields 
// A
// A and 
// B
// B, your task is to calculate the total number of plants in all fields that has odd number of plants between Field 
// A
// A and Field 
// B
// B.

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int start = min(A, B);
    int end = max(A, B);
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 1) { 
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
