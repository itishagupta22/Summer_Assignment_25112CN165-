#include <iostream>
using namespace std;

int main() {
    int a[10], n, x;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Element found at position " << i + 1;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}

