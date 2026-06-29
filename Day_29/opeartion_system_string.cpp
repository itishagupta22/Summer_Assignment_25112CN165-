#include <iostream>
using namespace std;

int main() {
    char str[100];
    int choice, length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str[length] != '\0') {
        length++;
    }

    cout << "\n----- String Operations -----\n";
    cout << "1. Find Length\n";
    cout << "2. Reverse String\n";
    cout << "3. Convert to Uppercase\n";
    cout << "4. Check Palindrome\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Length = " << length;
            break;

        case 2:
            cout << "Reversed String = ";
            for (int i = length - 1; i >= 0; i--) {
                cout << str[i];
            }
            break;

        case 3:
            for (int i = 0; i < length; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
            }

            cout << "Uppercase String = " << str;
            break;

        case 4: {
            bool palindrome = true;

            for (int i = 0; i < length / 2; i++) {
                if (str[i] != str[length - i - 1]) {
                    palindrome = false;
                    break;
                }
            }

            if (palindrome)
                cout << "Palindrome String";
            else
                cout << "Not a Palindrome String";

            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
