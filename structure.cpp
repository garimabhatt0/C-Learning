#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    /* data */int EmpID;
    string Name;
    string Address;
    string Phone;
    string Department;
    double salary;
    string Remarks;

};

void display()

{
    Employee emp1;

    emp1.EmpID = 1001;
    emp1. Name = "Garima Bhatt";
    emp1. Address = "Chandragiri";
     emp1.Phone= "9845632244";
      emp1. Department = "Office";
       emp1. salary = 15000;
        emp1. Remarks= "Sales management";

        cout<<"Employee ID: "<<emp1.EmpID<<endl;
    cout<<"Name: "<<emp1.Name<<endl;
    cout<<"Address: "<<emp1.Address<<endl;
    cout<<"Phone: "<<emp1.Phone<<endl;
    cout<<"Department: "<<emp1.Department<<endl;
    cout<<"Salary: "<<emp1.salary<<endl;
    cout<<"Remarks: "<<emp1.Remarks<<endl;
}
void AddNewEmployee()
{
 Employee emp2;

    emp2.EmpID = 102;
    emp2.Name = "Saugat Chand";
    emp2.Address = "Sinamangal";
    emp2.Phone = "9876543211";
    emp2.Department = "CEO";
    emp2.salary = 60000;
    emp2.Remarks = "Excellent Employee";

    cout<<"Employee ID: "<<emp2.EmpID<<endl;
    cout<<"Name: "<<emp2.Name<<endl;
    cout<<"Address: "<<emp2.Address<<endl;
    cout<<"Phone: "<<emp2.Phone<<endl;
    cout<<"Department: "<<emp2.Department<<endl;
    cout<<"Salary: "<<emp2.salary<<endl;
    cout<<"Remarks: "<<emp2.Remarks<<endl;
}
 
int main()
{
    display();
    cout<<endl;
    AddNewEmployee();
    return 0;
}