// Problem Statement
// Write a program to create a function that takes two arguments: the original price and the discount percentage as integers and returns the final price after the discount.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int orgPrice, disc;
    cin >> orgPrice >> disc;

    float discPrice = (float(orgPrice) * disc) / 100;
    float newPrice = orgPrice - discPrice;
    cout << fixed << setprecision(2);
    cout << "Price: " << newPrice << endl;

    return 0;
}
