#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> num;
    int x = 0;
    
    while (true) {
        num.push_back(x++);
        
        // Print size and capacity every 1 million iterations
        if (x % 1000000 == 0) {
            cout << "Elements added: " << x << ", Vector capacity: " << num.capacity() << endl;
        }
    }

    return 0;
}