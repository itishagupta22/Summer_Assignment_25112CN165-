#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];
    string name[n];
    float marks[n];

    // Input Student Records
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    // Display Student Records
    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << roll[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }

    return 0;
}
