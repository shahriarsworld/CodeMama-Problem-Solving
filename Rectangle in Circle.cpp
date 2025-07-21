// Problem Statement
// Write a program to create a function that takes three numbers — the width and height of a rectangle, and the radius of a circle — and returns
// true if the rectangle can fit inside the circle, false if it can't.

#include <iostream>
#include <cmath>
using namespace std;

bool canFitInCircle(float w, float h, float r) {
    float diag = sqrt(w * w + h * h);
    return diag <= 2 * r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double width, height, radius;
    cin >> width >> height >> radius;

    cout << (canFitInCircle(width, height, radius) ? "true" : "false") << '\n';

    return 0;
}
