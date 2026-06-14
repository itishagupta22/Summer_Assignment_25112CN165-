#include <iostream>
using namespace std;

int main() {
    int a[10], n, x, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            count++;
    }

    cout << "Frequency of " << x << " = " << count;

    return 0;
}
