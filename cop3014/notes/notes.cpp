#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // cout << "Notes: " << endl;
    // char x;
    // cout << "Enter a hexidecimal integer: ";
    // cin >> hex >> x;
    // cout << "x as a hexidecimal: " << hex << x << endl;
    // cout << "x as a octal number: " << oct << x << endl;
    // cout << "x as a decimal: " << dec << x << endl;

    // assignment operators
    // +=, -=, *=, /=, %=

    // increment/decrement operators
    // ++, --

    // other operators
    // <<, >>, &, ^, |, &&, ||, ?, :, =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=, &&=, ||=, ??=, ?:

    // the unary minus '-' has a higher precedence than many of the other operators
    //         -- this is because negating a number is a seperate task. 8 and -8 are stored as different numbers in binary.
    // int x , y;
    // cout << "Enter numbers for x and y: ";
    // cin >> x >> y;

    // cout << "x + y = " << x + y << endl;
    // cout << "x - y = " << x - y << endl;
    // cout << "x * y = " << x * y << endl;
    // cout << "x / y = " << x / y << endl;
    // cout << "x % y = " << x % y << endl;


    // loops
// leap year program
    // int year;
    // cout << "Enter a year: ";
    // cin >> year;

    // if (year%400==0){
    //     cout << "leap year";
    // }
    // else if (year%100 != 0 && year%4==0){
    //     cout << "leap year";
    // }
    // else cout << "not a leap year";
    
    // cout << endl;

// Write a C++ code snippet to read in 20 integers from the user. Add the odd and even numbers separately, and print the the difference between the odd sum and the even sum
    // int num, odd = 0, even = 0;

    // for (int i = 0; i < 20; i++) {
    //     cin >> num;
    //     if (num%2==0) {
    //         even += num;
    //     }
    //     else {
    //         odd += num;
    //     }

    // }
    // cout << "Total odd: " << odd << endl;
    // cout << "Total even: " << even << endl;

// Write a C++ code snippet to modify the leap year program you wrote for problem 1. Write a loop around the leap year check. Read in a series of 15 years from the user. Make sure the year is a positive number by negating a negative year. Then, check for a leap year. Finally, print the total number of leap years entered.
    // int year, count = 0;
    

    // for (int i = 0; i < 3; i++){ 
    //     cout << "Enter a year: ";
    //     cin >> year;
    //     if (year < 0) {
    //         year = year * -1;
    //     }

    //     if (year%400==0){
    //         cout << "leap year" << endl;
    //         count++;
    //     }
    //     else if (year%100 != 0 && year%4==0){
    //         cout << "leap year" << endl;
    //         count++;
    //     }
    //     else {
    //         continue;
    //     }
    // }
    // cout << "We had" << count << " leap years" << endl;

    // int num, sum = 0;
    // cout << "Enter values, -ve to stop: ";
    // cin >> num;
    
    // while (num >= 0) {
    //     sum += num*num;
    //     cin >> num;
    // }
    // cout << "the sum is: " << sum << endl;

    // return 0;

    // scope of a  variable
    // if you declare a variable in a loop it is only a variable inside of that loop

// Write a C++ code snippet to read in a number and print all the factors of the number

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // while (num>0) {
    //     for (int f=1; f<=num; f++) {
    //         if (num%f==0)
    //             cout<<f<<"\t";
    //     }
    // }



}