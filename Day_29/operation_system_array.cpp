#include <iostream>
using namespace std;

int main() {
    int n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\n----- Array Operations -----\n";
    cout << "1. Display Array\n";
    cout << "2. Find Largest Element\n";
    cout << "3. Find Smallest Element\n";
    cout << "4. Count Even and Odd Elements\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            break;

        case 2: {
            int largest = a[0];

            for (int i = 1; i < n; i++) {
                if (a[i] > largest)
                    largest = a[i];
            }

            cout << "Largest Element = " << largest;
            break;
        }

        case 3: {
            int smallest = a[0];

            for (int i = 1; i < n; i++) {
                if (a[i] < smallest)
                    smallest = a[i];
            }

            cout << "Smallest Element = " << smallest;
            break;
        }

        case 4: {
            int even = 0, odd = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }

            cout << "Even Elements = " << even << endl;
            cout << "Odd Elements = " << odd;
            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}