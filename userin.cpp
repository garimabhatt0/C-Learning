#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int EmpID;
    string Name;
    string Address;
    string Phone;
    string Department;
    double salary;
    string Remarks;
};

// Function to take input and display employee details
void inputAndDisplay()
{
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.EmpID;
    cin.ignore(); // To ignore leftover newline

    cout << "Enter Name: ";
    getline(cin, emp.Name);

    cout << "Enter Address: ";
    getline(cin, emp.Address);

    cout << "Enter Phone: ";
    getline(cin, emp.Phone);

    cout << "Enter Department: ";
    getline(cin, emp.Department);

    cout << "Enter Salary: ";
    cin >> emp.salary;
    cin.ignore();

    cout << "Enter Remarks: ";
    getline(cin, emp.Remarks);

    cout << "\n--- Employee Details ---" << endl;
    cout << "Employee ID: " << emp.EmpID << endl;
    cout << "Name: " << emp.Name << endl;
    cout << "Address: " << emp.Address << endl;
    cout << "Phone: " << emp.Phone << endl;
    cout << "Department: " << emp.Department << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Remarks: " << emp.Remarks << endl;
}

int main()
{
    inputAndDisplay();
    return 0;
}
