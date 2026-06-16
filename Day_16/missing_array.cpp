#include <iostream>
using namespace std;

int main() {
    int a[10], n, sum = 0, total = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    total = (n + 1) * (n + 2) / 2;

    cout << "Missing number = " << total - sum;

    return 0;
}
