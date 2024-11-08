#include <iostream>

using namespace std;

int main() {
    int total = 0;
    for (int i = 12; i < 3000; i += 12){
        total += i;
        cout << i << endl;
    }
    cout << total << endl;
}