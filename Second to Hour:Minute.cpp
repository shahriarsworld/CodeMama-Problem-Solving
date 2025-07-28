// Problem Statement
// Write a program which will take seconds as input and output into hour:minute.

#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;
    int hours = seconds / 3600;
    int mins = (seconds % 3600) / 60;
    cout << hours << ":" << mins << endl;

    return 0;
}
