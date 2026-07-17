#include <iostream>
using namespace std;

int main() {
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    double area = (radius > 0) ? 3.14159 * radius * radius : 0;

    cout << "Area = " << area << endl;

    return 0;
}