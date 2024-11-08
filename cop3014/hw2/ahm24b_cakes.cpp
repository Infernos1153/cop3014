/* Name: Andrew Miley
Date: 09-02-24
Section: 0008
Assignment: Homework 0
Due Date: 09-02-24
About this project: (write a small blurb about what this project's goals are/what tasks it accomplishes)
Assumptions: (write any assumptions made here (ex: assumes correct user input))

All work below was performed by Andrew Miley */

#include <iostream>
#include <iomanip>

const float pi = 3.14;

using namespace std;

int main() {
    // get user input for 4 radii
    float rad1, rad2, rad3, rad4;
    cout << "Enter the 4 radii values: ";
    cin >> rad1 >> rad2 >> rad3 >> rad4;

    // get the number of slices for each pizza
    float slice1, slice2, slice3, slice4;
    cout << "Enter the number of slices for each: ";
    cin >> slice1 >> slice2 >> slice3 >> slice4;

    // calculate volume of the cake
    float vol1, vol2, vol3, vol4;

    vol1 = 4.0 / 3.0 * pi * rad1 * rad1 * rad1;
    vol2 = 4.0 / 3.0 * pi * rad2 * rad2 * rad2;
    vol3 = 4.0 / 3.0 * pi * rad3 * rad3 * rad3;
    vol4 = 4.0 / 3.0 * pi * rad4 * rad4 * rad4;

    // calculate the volume of each slice (cake#)
    float cake1, cake2, cake3, cake4;
    cake1 = vol1 / slice1;
    cake2 = vol2 / slice2;
    cake3 = vol3 / slice3;
    cake4 = vol4 / slice4;
    cout << "return 0" << endl;
    // print the volume of each slice
    if (cake1 == cake2 && cake2 == cake3 && cake3 == cake4) {
        cout << "Error: All cakes have the same volume per slice." << endl;
        return 1;
    }

    if (cake1 <= cake2 && cake2 <= cake3 && cake3 <= cake4) {
        cout << "cake1: " << cake1 << ", cake2: " << cake2 << ", cake3: " << cake3 << ", cake4: " << cake4;
    }
    else if (cake1 <= cake2 && cake2 <= cake4 && cake4 <= cake3) {
        cout << "cake1: " << cake1 << ", cake2: " << cake2 << ", cake4: " << cake4 << ", cake3: " << cake3;
    }
    else if (cake1 <= cake3 && cake3 <= cake2 && cake2 <= cake4) {
        cout << "cake1: " << cake1 << ", cake3: " << cake3 << ", cake2: " << cake2 << ", cake4: " << cake4;
    }
    else if (cake1 <= cake3 && cake3 <= cake4 && cake4 <= cake2) {
        cout << "cake1: " << cake1 << ", cake3: " << cake3 << ", cake4: " << cake4 << ", cake2: " << cake2;
    }
    else if (cake1 <= cake4 && cake4 <= cake2 && cake2 <= cake3) {
        cout << "cake1: " << cake1 << ", cake4: " << cake4 << ", cake2: " << cake2 << ", cake3: " << cake3;
    }
    else if (cake1 <= cake4 && cake4 <= cake3 && cake3 <= cake2) {
        cout << "cake1: " << cake1 << ", cake4: " << cake4 << ", cake3: " << cake3 << ", cake2: " << cake2;
    }
    else if (cake2 <= cake1 && cake1 <= cake3 && cake3 <= cake4) {
        cout << "cake2: " << cake2 << ", cake1: " << cake1 << ", cake3: " << cake3 << ", cake4: " << cake4;
    }
    else if (cake2 <= cake1 && cake1 <= cake4 && cake4 <= cake3) {
        cout << "cake2: " << cake2 << ", cake1: " << cake1 << ", cake4: " << cake4 << ", cake3: " << cake3;
    }
    else if (cake2 <= cake3 && cake3 <= cake1 && cake1 <= cake4) {
        cout << "cake2: " << cake2 << ", cake3: " << cake3 << ", cake1: " << cake1 << ", cake4: " << cake4;
    }
    else if (cake2 <= cake3 && cake3 <= cake4 && cake4 <= cake1) {
        cout << "cake2: " << cake2 << ", cake3: " << cake3 << ", cake4: " << cake4 << ", cake1: " << cake1;
    }
    else if (cake2 <= cake4 && cake4 <= cake1 && cake1 <= cake3) {
        cout << "cake2: " << cake2 << ", cake4: " << cake4 << ", cake1: " << cake1 << ", cake3: " << cake3;
    }
    else if (cake2 <= cake4 && cake4 <= cake3 && cake3 <= cake1) {
        cout << "cake2: " << cake2 << ", cake4: " << cake4 << ", cake3: " << cake3 << ", cake1: " << cake1;
    }
    else if (cake3 <= cake1 && cake1 <= cake2 && cake2 <= cake4) {
        cout << "cake3: " << cake3 << ", cake1: " << cake1 << ", cake2: " << cake2 << ", cake4: " << cake4;
    }
    else if (cake3 <= cake1 && cake1 <= cake4 && cake4 <= cake2) {
        cout << "cake3: " << cake3 << ", cake1: " << cake1 << ", cake4: " << cake4 << ", cake2: " << cake2;
    }
    else if (cake3 <= cake2 && cake2 <= cake1 && cake1 <= cake4) {
        cout << "cake3: " << cake3 << ", cake2: " << cake2 << ", cake1: " << cake1 << ", cake4: " << cake4;
    }
    else if (cake3 <= cake2 && cake2 <= cake4 && cake4 <= cake1) {
        cout << "cake3: " << cake3 << ", cake2: " << cake2 << ", cake4: " << cake4 << ", cake1: " << cake1;
    }
    else if (cake3 <= cake4 && cake4 <= cake1 && cake1 <= cake2) {
        cout << "cake3: " << cake3 << ", cake4: " << cake4 << ", cake1: " << cake1 << ", cake2: " << cake2;
    }
    else if (cake3 <= cake4 && cake4 <= cake2 && cake2 <= cake1) {
        cout << "cake3: " << cake3 << ", cake4: " << cake4 << ", cake2: " << cake2 << ", cake1: " << cake1;
    }
    else if (cake4 <= cake1 && cake1 <= cake2 && cake2 <= cake3) {
        cout << "cake4: " << cake4 << ", cake1: " << cake1 << ", cake2: " << cake2 << ", cake3: " << cake3;
    }
    else if (cake4 <= cake1 && cake1 <= cake3 && cake3 <= cake2) {
        cout << "cake4: " << cake4 << ", cake1: " << cake1 << ", cake3: " << cake3 << ", cake2: " << cake2;
    }
    else if (cake4 <= cake2 && cake2 <= cake1 && cake1 <= cake3) {
        cout << "cake4: " << cake4 << ", cake2: " << cake2 << ", cake1: " << cake1 << ", cake3: " << cake3;
    }
    else if (cake4 <= cake2 && cake2 <= cake3 && cake3 <= cake1) {
        cout << "cake4: " << cake4 << ", cake2: " << cake2 << ", cake3: " << cake3 << ", cake1: " << cake1;
    }
    else if (cake4 <= cake3 && cake3 <= cake1 && cake1 <= cake2) {
        cout << "cake4: " << cake4 << ", cake3: " << cake3 << ", cake1: " << cake1 << ", cake2: " << cake2;
    }
    else {
        cout << "cake4: " << cake4 << ", cake3: " << cake3 << ", cake2: " << cake2 << ", cake1: " << cake1;
    }

    cout << "return 0" << endl;
}