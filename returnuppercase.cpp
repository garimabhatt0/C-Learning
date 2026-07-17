#include <iostream>
#include <cctype>
using namespace std;

char toUpper(char ch) {
    return toupper(ch);
}

int main() {
    char ch = 'a';
    cout << "Uppercase of '" << ch << "' is: " << toUpper(ch) << endl;
    return 0;
}