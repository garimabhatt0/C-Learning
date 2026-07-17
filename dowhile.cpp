#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number (to print 1 to n): ";
    cin >> n;

    cout << "--- Using do-while loop ---\n";
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;

    return 0;
}