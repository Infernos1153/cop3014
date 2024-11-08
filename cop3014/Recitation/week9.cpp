#include <iostream>

using namespace std;

/* harmonicSum
float harmonicSum(int $n);

int main(){
    int n;
    cin >> n;
    cout << harmonicSum(n) << endl;
}

float harmonicSum(int n) {
    float total = 0;
    for (int i = 1; i <= n; i++) {
        total += 1.0/i;
    }
    return total;
}
*/

/* geometricSum
float geometricSum(int a, int b, int n);

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    cout << geometricSum(a,b,n) << endl;
}

float geometricSum(int a, int b, int n) {
    float total = a;
    for (int i = 1; i <= n; i++) {
        total += (static_cast<float>(a) + i)/(b*i);
        cout << total << endl;
    }
    return total;
}
*/

void fizzbuzz(int n, int a, int b);

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    fizzbuzz(n,a,b);
}

void fizzbuzz(int n, int firstDivisor, int secondDivisor) {
    if (n % firstDivisor == 0 && n % secondDivisor == 0) {
        cout << "Fizz-Buzz" << endl;
    } else if (n % firstDivisor == 0) {
        cout << "Fizz" << endl;
    } else if (n % secondDivisor == 0) {
        cout << "Buzz" << endl;
    } else {
        cout << n << endl;
    }
}