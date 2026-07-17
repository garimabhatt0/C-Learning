#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number (to print 1 to n): ";
    cin >> n;

    cout << "--- Using for loop ---\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
