// Problem Statement
// Write a program that returns the number of frames shown in a given number
// of minutes for a certain FPS. FPS stands for "frames per second" and it's the number of frames a computer screen shows every second.
#include <iostream>
using namespace std;

int main() {
    int minutes, fps;
    cin >> minutes >> fps;

    int totalFrames = minutes * 60 * fps;
    cout << totalFrames << endl;

    return 0;
}
