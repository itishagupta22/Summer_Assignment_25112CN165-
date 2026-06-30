#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int empID[n];
    string name[n];
    float salary[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> empID[i];

        cout << "Employee Name: ";
        cin >> name[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    int choice;

    do {
        cout << "\n------ MINI EMPLOYEE MANAGEMENT SYSTEM ------" << endl;
        cout << "1. Display Employees" << endl;
        cout << "2. Search Employee" << endl;
        cout << "3. Update Salary" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:

            cout << "\nEmployee Records\n";

            for (int i = 0; i < n; i++) {
                cout << "\nEmployee ID : " << empID[i] << endl;
                cout << "Name        : " << name[i] << endl;
                cout << "Salary      : " << salary[i] << endl;
            }

            break;

        case 2: {

            int searchID;
            bool found = false;

            cout << "Enter Employee ID to search: ";
            cin >> searchID;

            for (int i = 0; i < n; i++) {

                if (empID[i] == searchID) {

                    cout << "\nEmployee Found\n";
                    cout << "Employee ID : " << empID[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Salary      : " << salary[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found";

            break;
        }

        case 3: {

            int updateID;
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> updateID;

            for (int i = 0; i < n; i++) {

                if (empID[i] == updateID) {

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Salary Updated Successfully";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found";

            break;
        }

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}