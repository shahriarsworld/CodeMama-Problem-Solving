// Problem Statement
// Write a program where you will be given a string written in upper letter. You will have to convert the string into lower letter.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    cout << input << endl;

    return 0;
}
