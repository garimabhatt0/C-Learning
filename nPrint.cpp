#include <iostream>
using namespace std;

void nPrint(char ch, int times) {
    for (int i = 0; i < times; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    cout << "nPrint('a', 4) prints: ";
    nPrint('a', 4);
    return 0;
}