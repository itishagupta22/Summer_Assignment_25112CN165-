#include <iostream>
using namespace std;

int main() {
    int a[10], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
            cout << a[i] << " ";
    }

    return 0;
}
