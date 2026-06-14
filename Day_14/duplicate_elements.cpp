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

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
