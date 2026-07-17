#include <iostream>
using namespace std;

double m(int i) {
    double sum = 0.0;
    for (int k = 1; k <= i; k++) {
        sum += (double)k / (k + 1);
    }
    return sum;
}

int main() {
    int i = 5;
    cout << "m(" << i << ") = " << m(i) << endl;
    return 0;
}