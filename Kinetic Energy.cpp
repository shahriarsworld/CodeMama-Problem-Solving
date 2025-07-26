// Problem Statement
// Write a program that will calculate Kinetic Energy. It can be calculated with the following formula: KE = 0.5mV*V where m is mass in kg, v is velocity in m/s, KE is kinetic energy in J. Return the Kinetic Energy in Joules, given the mass and velocity. For the purposes of this challenge, round answers to the nearest integer.

#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double mass, velocity;
    cin >> mass >> velocity;

    double kineticEnergy = 0.5 * mass * velocity * velocity;

    cout << round(kineticEnergy) << endl;
    return 0;
}
