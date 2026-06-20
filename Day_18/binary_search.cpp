#include <iostream>
using namespace std;

int main() {
    int a[10], n, x;
    int low, high, mid;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == x) {
            cout << "Element found at position " << mid + 1;
            found = true;
            break;
        }
        else if (x > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
