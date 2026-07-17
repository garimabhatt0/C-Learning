#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numStudents;
    double highest = -numeric_limits<double>::infinity();

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 1; i <= numStudents; i++) {
        double score;
        cout << "Enter score for student " << i << ": ";
        cin >> score;
        if (score > highest) {
            highest = score;
        }
    }

    cout << "The highest score is " << highest << endl;

    return 0;
}



