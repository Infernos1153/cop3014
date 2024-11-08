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
using namespace std;

int main() {
    double damage, mph, sharkweight, duration;
    char sharktype;
    
    // display menu
    cout << "Basking Shark - B" << endl;
    cout << "Great White Shark - G" << endl;
    cout << "Hammerhead Shark - H" << endl;
    cout << "Whale Shark - W" << endl;
    cout << "Bull Shark - U" << endl;
    cout << "Lemon Shark - L" << endl;
    
    // user enters sharktype
    cout << "Enter the type of shark: ";
    cin >> sharktype;

    // user enters windspeed
    cout << "Enter windspeed (mph): ";
    cin >> mph;
    while (mph <= 0) {
        cout << "Windspeed must be greater than 0. Enter windspeed (mph): ";
        cin >> mph;
    }
    double windspeed = mph * 0.447; // convert mph to m/s

    // user enters duration
    cout << "Enter the duration (in seconds): ";
    cin >> duration;
    while (duration <= 0) {
        cout << "Duration must be greater than 0. Enter the duration (in seconds): ";
        cin >> duration;
    }

    switch(sharktype) {
        case 'B':
            sharkweight = 14500;
            break;
        case 'G':
            sharkweight = 2270;
            break;
        case 'H':
            sharkweight = 230;
            break;
        case 'W':
            sharkweight = 21000;
            break;
        case 'U':
            sharkweight = 130;
            break;
        case 'L':
            sharkweight = 183;
            break;
        default:
            cout << "Invalid shark type. Please enter 'B' , 'G', 'H', 'W', 'U', or 'L'" << endl;
            return 1;
    }
    damage = windspeed * sharkweight * duration;
    cout << fixed << setprecision(2) << "Estimated Sharknado Damage: $" << damage << endl;

}