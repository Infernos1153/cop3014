/* Name: Andrew Miley
Date: 10-7-2024
Section: 0008
Assignment: Homework 3
Due Date: 10-9-24
About this project: This program will take the size of the letter and the letter from the user and will print them to the specified size.
Assumptions: No assumptuions

All work below was performed by Andrew Miley */

#include <iostream>

using namespace std;
    
int main() {
    char letter;
    int size;

    cout << "Enter the scale: ";
    cin >> size;

    while (size%2 == 0 || size < 7) {
        cout << "Invalid size. Enter size again: ";
        cin >> size;
    }

    cout << "Enter a letter: ";
    cin >> letter;

    while (letter != '3' && letter != 'S' && letter != 'T' && letter != 'R' && letter != 'Y') { //3, S, T, R, or Y
        cout << "Invalid letter: Enter the letter again: ";
        cin >> letter;
    }

    switch (letter) { 
        case '3': // prints 3 successfully
            // print 3
            cout << "Printing 3\n";
            for (int row = 0; row < size; row++) {
                if (row == 0 || row == size/2 || row == size-1) {
                    for (int col= 0; col< size; col++){
                        cout << "*";
                    }
                    cout << endl;
                }
                else {
                    for (int col= 0; col< size -1; col++) {
                        cout << " ";
                    }
                    cout << "*" << endl;
                }
            }
            break;
        case 'S': // prints S successfully
            cout << "Printing S\n";
            for (int row = 0; row < size; row++) {
                if (row == 0 || row == size/2 || row == size-1) {
                    for (int col= 0; col< size; col++){
                        cout << "*";
                    }
                    cout << endl;
                }
                else if (row > size/2) {
                    for (int col= 0; col< size -1; col++) {
                        cout << " ";
                    }
                    cout << "*" << endl;
                }
                else {
                    cout << "*" << endl;
                }
            }
            break;
        case 'T': // prints T successfully
            for (int row = 0; row < size; row++) {
                for (int col= 0; col<size; col++) {
                    if (row == 0) {
                        cout << "*";
                    }
                    else {
                        if (col == size/2) {
                            cout << "*";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
            break;
        case 'R': // prints R successfully
        cout << "Printing R\n";
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                if (col == 0) {
                    // Left vertical line
                    cout << "*";
                } 
                else if ((row == 0 || row == size / 2) && col < size - 1) {
                    // Top and middle horizontal lines
                    cout << "*";
                } 
                else if (row < size / 2 && col == size - 1) {
                    // Right vertical line in the upper half
                    cout << "*";
                } 
                else if (row > size / 2 && col == row - size / 2) {
                    // Diagonal line from the middle to the bottom-right
                    cout << "*";
                } 
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 'Y':
        cout << "Printing Y\n";
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                if (row <= size / 2) {
                    // Upper part of 'Y'
                    if (col == row || col == size - row - 1) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                } else {
                    // Lower part of 'Y'
                    if (col == size / 2) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        break;
        default:
            cout << "Invalid letter.\n";
            break;
    }
}