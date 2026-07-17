#include <iostream>
using namespace std;

int main() {
    int year, month, days;

    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter a month (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2: {
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            days = isLeapYear ? 29 : 28;
            break;
        }
        default:
            days = -1;
    }

    string monthNames[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    if (days == -1) {
        cout << "Invalid month entered." << endl;
    } else {
        cout << monthNames[month - 1] << " " << year << " has " << days << " days." << endl;
    }

    return 0;
}