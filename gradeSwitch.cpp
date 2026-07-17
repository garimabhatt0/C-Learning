#include <iostream>
using namespace std;

// if-else version
void gradeUsingIfElse(int marks) {
    cout << "\n--- Using if-else ---\n";
    cout << "Marks: " << marks << " => Grade: ";

    if (marks >= 90 && marks <= 100) cout << "A+ (Outstanding)";
    else if (marks >= 80) cout << "A (Excellent)";
    else if (marks >= 70) cout << "B+ (Very Good)";
    else if (marks >= 60) cout << "B (Good)";
    else if (marks >= 50) cout << "C+ (Above Average)";
    else if (marks >= 40) cout << "C (Average)";
    else if (marks >= 33) cout << "D (Pass)";
    else if (marks >= 0) cout << "F (Fail)";
    else cout << "Invalid marks";

    cout << endl;
}

// switch version
void gradeUsingSwitch(int marks) {
    cout << "\n--- Using switch ---\n";
    cout << "Marks: " << marks << " => Grade: ";

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!";
        cout << endl;
        return;
    }

    int band = marks / 10;

    switch (band) {
        case 10:
        case 9:
            cout << "A+ (Outstanding)";
            break;
        case 8:
            cout << "A (Excellent)";
            break;
        case 7:
            cout << "B+ (Very Good)";
            break;
        case 6:
            cout << "B (Good)";
            break;
        case 5:
            cout << "C+ (Above Average)";
            break;
        case 4:
            cout << "C (Average)";
            break;
        case 3:
            cout << "D (Pass)";
            break;
        default:
            cout << "F (Fail)";
    }

    cout << endl;
}

// main function
int main() {
    int userMarks;

    cout << "Enter your own marks (0-100): ";
    cin >> userMarks;

    gradeUsingIfElse(userMarks);
    gradeUsingSwitch(userMarks);

    return 0;
}