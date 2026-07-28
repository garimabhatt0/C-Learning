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
    double array[] = {5.5, 3.3, 8.8, 1.1, 9.9};
    int size = sizeof(array) / sizeof(array[0]);

    double result = min(array, size);
    cout << "The minimum value is " << result << endl;

    return 0;
}