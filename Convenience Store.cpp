// Write a program where a total due and an array representing the amount of change in your pocket will be given, determine whether or not you are able to pay for the item. Change will always be represented in the following order: quarters, dimes, nickels, pennies.

// To illustrate: changeEnough(25, 20, 5, 0, 4.25) should yield true, since having 25 quarters, 20 dimes, 5 nickels and 0 pennies gives you 6.25 + 2 + .25 + 0 = 8.50.

#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, pennies;
    double totalDue;
    cin >> quarters >> dimes >> nickels >> pennies >> totalDue;
    double totalChange = (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01);
    if (totalChange >= totalDue) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

