/* Name: Andrew Miley
Date: 10-25-24
Section: 0008
Assignment: Homework 4
Due Date: 10-27-24
About this project: this project calculates the sum of the series
Assumptions: none

All work below was performed by Andrew Miley */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function declarations
double factorial(int n);
double sum(double x, int n);

int main() {
    double x;
    int n;

    // Take input for x and ensure it's within [-3.14, 3.14]
    cout << "Enter the value of x: ";
    cin >> x;
    if (x < -3.14 || x > 3.14) {
        cout << "x must be within [-3.14, 3.14]" << endl;
        return 1;
    }

    // Take input for n and ensure it's a positive integer
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "The number of terms must be positive." << endl;
        return 1;
    }

    double sin_approx = sum(x, n);
    double sin_actual = sin(x);

    // Calculate the error between the two values
    double error = fabs(sin_actual - sin_approx);

    // Output the results with precision of six decimal places
    cout << fixed << setprecision(6);
    cout << "sin(" << x << ") = " << sin_approx << endl;
    cout << "Error: " << error << endl;

    return 0;
}

// Function to calculate the factorial of a number iteratively
double factorial(int n) {
    double fact = 1.0;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute sin(x) using the McLaurin series expansion
double sum(double x, int n) {
    double result = 0.0;
    for (int k = 0; k < n; k++) {
        int exponent = 2 * k + 1;
        double term = pow(-1, k) * pow(x, exponent) / factorial(exponent);
        result += term;
    }
    return result;
}