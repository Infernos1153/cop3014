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

    float pi = 3.1415;
    // welcome the user
    cout << "Welcome user" << endl;

    // get the radius of the pizza from the user
    cout << "Enter the radius of the pizza: ";
    int radius;
    cin >> radius;

    // get the price of the pizza before tax from the user
    cout << "Enter the price (before tax) of the pizza: ";
    float pricePizza;
    cin >> pricePizza;

    // get the tax percentage from the user
    cout << "Enter the tax percentage: ";
    float taxRate;
    cin >> taxRate;

    //calculate the price of the pizza
    pricePizza = pricePizza + (pricePizza*taxRate/100);
    cout << "Cost of the pizza is: " << pricePizza << endl;
    float area = pi * radius * radius;

    // cost per square inch
    float costPSI = pricePizza / area;
    cout << "Cost per square inch: " << costPSI << endl;
    
    // Get the number of ways to split the check
    float numCheck;
    cout << "Enter the number of checks: ";
    cin >> numCheck;
    // calculate the price per person
    float pricePerPerson = pricePizza / numCheck;
    cout << "Price per person: " << pricePerPerson << endl;
    
    // for debugging
    // cout << pricePizza << endl << pricePerPerson << endl << area << endl << radius << endl;

    return 0;

}