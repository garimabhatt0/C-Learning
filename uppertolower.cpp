#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

int main() {
    char upper = 'B';
    cout << "Lowercase of '" << upper << "' is: " << toLowerCase(upper) << endl;
    return 0;
}