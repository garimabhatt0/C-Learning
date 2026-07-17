#include <iostream>
using namespace std;

int main() {
    double sum = 0;

    for (int numerator = 1; numerator <= 97; numerator += 2) {
        int denominator = numerator + 2;
        sum += (double) numerator / denominator;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}