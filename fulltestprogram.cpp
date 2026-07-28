#include <iostream>
using namespace std;

double min(double array[], int size) {
    double minValue = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
        }
    }
    return minValue;
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "Enter ten numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    double minValue = min(numbers, SIZE);

    cout << "The minimum value is " << minValue << endl;

    return 0;
}