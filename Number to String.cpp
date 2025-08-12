// Write a program to convert number into string. The program will print every digit of the number as a string.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    if(!(cin >> N)) return 0;
    if(N < 0) N = -N; 

    vector<string> words = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    if(N == 0) {
        cout << "zero\n";
        return 0;
    }
    
    string s = to_string(N);
    for(size_t i = 0; i < s.size(); ++i) {
        if(i) cout << ' ';
        cout << words[s[i] - '0'];
    }
    cout << '\n';
    return 0;
}
