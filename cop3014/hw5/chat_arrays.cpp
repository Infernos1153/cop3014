#include <iostream>
using namespace std;

// Function Prototypes
void readArray(double array[], int &size);
void printArray(const double array[], int size);
int linearSearch(const double array[], int size, int key, int startPosition);
void insertValues(double array[], int &size, int startNum, int searchKey);
int removeValues(double array[], int size, int start, int end);
void moveElements(double array[], int size, int oddShift, int evenShift);
void sort(double array[], int size);
void menu();

// Main Function
int main() {
    const int CAPACITY = 100;
    double array[CAPACITY];
    int size;

    cout << "Initialize the array:\n";
    readArray(array, size);

    int choice;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                printArray(array, size);
                break;
            case 2: {
                int startNum, searchKey;
                cout << "Enter the value after which to insert: ";
                cin >> startNum;
                cout << "Enter the starting value: ";
                cin >> searchKey;
                insertValues(array, size, startNum, searchKey);
                break;
            }
            case 3: {
                int start, end;
                cout << "Enter start and end values for removal: ";
                cin >> start >> end;
                size = removeValues(array, size, start, end);
                break;
            }
            case 4: {
                int oddShift, evenShift;
                cout << "Enter odd-position shift count and even-position shift count: ";
                cin >> oddShift >> evenShift;
                moveElements(array, size, oddShift, evenShift);
                break;
            }
            case 5:
                sort(array, size);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

// Function Definitions
void readArray(double array[], int &size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printArray(const double array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int linearSearch(const double array[], int size, int key, int startPosition) {
    for (int i = startPosition; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1; // key value not found
}

void insertValues(double array[], int &size, int startNum, int searchKey) {
    int pos = 0;
    while ((pos = linearSearch(array, size, searchKey, pos)) != -1) {
        if (size >= 99) return; // keep inder capacity
        for (int i = size; i > pos + 1; i--) {
            array[i] = array[i - 1];
        }
        array[pos + 1] = startNum++;
        size++;
        pos += 2; // Skip over inserted value
    }
}

int removeValues(double array[], int size, int start, int end) {
    int startPos = linearSearch(array, size, start, 0);
    int endPos = linearSearch(array, size, end, 0);

    if (startPos == -1 || endPos == -1 || startPos > endPos) {
        return size; // No removal needed
    }

    int range = endPos - startPos + 1;
    for (int i = startPos; i < size - range; i++) {
        array[i] = array[i + range];
    }
    return size - range;
}

void moveElements(double array[], int size, int oddShift, int evenShift) {
    if (oddShift < 0 || evenShift < 0) return;

    // Circular left shift for odd indices
    for (int shift = 0; shift < oddShift; shift++) {
        double temp = array[1]; // Save the first odd index
        for (int i = 1; i < size - 1; i += 2) {
            array[i] = array[i + 2];
        }
        if (size % 2 == 0) {
            array[size - 1] = temp;
        } else {
            array[size - 2] = temp;
        }
    }

    // Circular right shift for even indices
    for (int shift = 0; shift < evenShift; shift++) {
        double temp = array[0]; // Save the first even index
        for (int i = size - 2; i >= 0; i -= 2) {
            array[i] = array[i - 2];
        }
        array[0] = temp;
    }
}

void sort(double array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(array[i], array[maxIndex]);
    }
}

void menu() {
    cout << "\nMenu:\n";
    cout << "1. Print\n";
    cout << "2. Insert\n";
    cout << "3. Remove\n";
    cout << "4. Shift\n";
    cout << "5. Sort\n";
    cout << "6. Exit\n";
}