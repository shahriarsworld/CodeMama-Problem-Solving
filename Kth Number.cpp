// Problem Statement
// You are given an array of integers of size 
// N
// N. You have to find the 
// K
// t
// h
// Kth smallest number in the array.

#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> arr(N);  

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    cout << arr[K - 1] << endl;

    return 0;
}
