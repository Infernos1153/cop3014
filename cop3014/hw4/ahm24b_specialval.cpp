/* Name: Andrew Miley
Date: 10-25-24
Section: 0008
Assignment: Homework 4
Due Date: 10-27-24
About this project: this project calculates the average of the special values
Assumptions: none

All work below was performed by Andrew Miley */

#include <iostream>
#include <cstdlib>

using namespace std;

// Functions
int reverse(int n);
int value(int n);

int main() {
    // get random seed from user
    int seed;
    cout << "Enter the seed for the RNG: ";
    cin >> seed;
    srand(seed);

    int num;
    int totalSpecialValues = 0,count = 0;

    // gets num from  user until 0 is entered
    cout << "Enter a number: ";
    cin >> num;


    while (num != 0) { // for loop?
        int specialValue = value(num);
        cout << "The special value is " << specialValue << endl;

        // get total and count for average calculation
        totalSpecialValues += specialValue;
        count++;

        cout << "Enter the next number: ";
        cin >> num;
    }

    // if numberrs were entered calculate average
    if (count > 0) {
        double average = static_cast<double>(totalSpecialValues) / count;
        cout << "The average is " << average << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}

// Function definitions

// Function to reverse the digits of an integer
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Function to calculate the Special Value
int value(int n) {
    int rev_n = reverse(n);
    int random_num = rand() % n;
    int special_value = abs(rev_n - random_num);
    return special_value;
}