#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;

    cout << hours << ":" << minutes << endl;

    return 0;
}
