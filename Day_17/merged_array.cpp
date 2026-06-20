
#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], c[20];
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

    for (int i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    cout << "Merged array: ";

    for (int i = 0; i < n1 + n2; i++) {
        cout << c[i] << " ";
    }

    return 0;
}