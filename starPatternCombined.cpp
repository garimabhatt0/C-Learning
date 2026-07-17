#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "\n--- Combined for + do-while ---\n";

    for (int i = n; i >= 1; i--) {
        int j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= i);

        cout << endl;
    }

    return 0;
}