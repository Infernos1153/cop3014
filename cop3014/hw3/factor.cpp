#include <iostream>

using namespace std;

int main() {
    int num1 = 24;
    int num2 = 36;
    int factor;

    int min_num = (num1 < num2) ? num1 : num2;

    for (int i = 2; i <= min_num; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            factor = i;
            break; // Exit the loop after finding a common factor
        }
    }
    cout << factor;
    return 0;
}