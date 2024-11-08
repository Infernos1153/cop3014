#include <iostream>

using namespace std;

int secondLargest(int nums[], int size);

int main() {
    const int size = 5;
    int nums[size] = {0};
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    int result = secondLargest(nums, size);
    cout << "The second largest number is:\t" << result << endl;
    for (int i = 0; i < size; i++) {
        cout << nums[i] << "\t";
    }
    cout << endl;
    return 0;
}

int secondLargest(int nums[], int size) {
    int largest, secondLargest;
    if (nums[1] == nums[0]) {
        if (nums[2] > nums[3]) {
            largest = nums[2];
            secondLargest = nums[3];
        } else {
            largest = nums[3];
            secondLargest = nums[2];
        }
    } else if (nums[0] > nums[1]) {
        largest = nums[0];
        secondLargest = nums[1]; 
    } else {
        largest = nums[1];
        secondLargest = nums[0];
    }
    for (int i = 2; i < size; i++) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        if (nums[i] < largest && nums[i] > secondLargest) {
            secondLargest = nums[i];
        }
    }
    return secondLargest;
}