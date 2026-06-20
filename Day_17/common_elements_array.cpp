#include <iostream>
using namespace std;

int main() {
    int a[10], b[10];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    cout << "The common elements are : ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}