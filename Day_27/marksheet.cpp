#include <iostream>
using namespace std;

int main() {
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;

    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "MARKSHEET" << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Subject 1   : " << m1 << endl;
    cout << "Subject 2   : " << m2 << endl;
    cout << "Subject 3   : " << m3 << endl;
    cout << "Subject 4   : " << m4 << endl;
    cout << "Subject 5   : " << m5 << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    return 0;
}