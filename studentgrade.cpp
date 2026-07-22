#include <iostream>
using namespace std;

void displayStudents(string names[], char grades[], int size, int index)
{
    if (index == size)
        return;

    cout << names[index]
         << " Grade: "
         << grades[index] << endl;
    displayStudents(names, grades, size, index + 1);
}

int main()
{
    string names[] = {"Alice", "Bob", "Charlie", "David"};
    char grades[] = {'A', 'B', 'A', 'C'};
    displayStudents(names, grades, 4, 0);
    return 0;
}