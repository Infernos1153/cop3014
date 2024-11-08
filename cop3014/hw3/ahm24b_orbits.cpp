/* Name: Andrew Miley
Date: 10-9-24
Section: 0008
Assignment: Homework 3
Due Date: 10-9-24
About this project: This program gets the orbit time of a large planetary body and number of small planetary bodies from the user and calculates the resonant frequencies by reducing the orbit times to their smallest form if they share a common factor.
Assumptions: Assumes that all inputs are positive integers greater than zero.

All work below was performed by Andrew Miley */

#include <iostream>

using namespace std;

int main() {
    int orbitLarge, orbitSmall, numSmall, factor; // defining the variables
    
    // Get the orbit time of the large planetary body from the user
    cout << "Enter the orbit time of the large planetary body: ";
    cin >> orbitLarge;

    // Get the number of orbiting small bodies from the user
    cout << "Enter the number of orbiting small bodies: ";
    cin >> numSmall;

    for (int i = 0; i < numSmall; i++) {
        // get the orbital time of the small planetary body from the user
        cout << "Enter the orbital time of body " << (i + 1) << ": ";
        cin >> orbitSmall;
        factor = 1;
        // Find the greatest common factor (GCF) of orbitLarge and orbitSmall
        for (int j = 2; j <= orbitSmall; ++j) {
            if (orbitLarge % j == 0 && orbitSmall % j == 0) {
                factor = j;
            }
        }
        // Print the resonant frequency by dividing orbit times by the GCF
        cout << "Resonant Frequency is: " << orbitLarge / factor << ":" << orbitSmall / factor << endl;
    }

    return 0;
}