#include <iostream>
using namespace std;

int main() {
    int empID;
    string name;
    float basicSalary, hra, da, pf, netSalary;

    cout << "Enter Employee ID: ";
    cin >> empID;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;
    pf = basicSalary * 0.08;

    netSalary = basicSalary + hra + da - pf;

    cout << "\nSalary Details\n";
    cout << "Employee ID   : " << empID << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "HRA           : " << hra << endl;
    cout << "DA            : " << da << endl;
    cout << "PF            : " << pf << endl;
    cout << "Net Salary    : " << netSalary << endl;

    return 0;
}