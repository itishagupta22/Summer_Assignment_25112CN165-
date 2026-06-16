#include <iostream>
using namespace std;

int main() {
    int a[10], n, sum;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter required sum: ";
    cin >> sum;

    cout << "Pairs are: " << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == sum) {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }

    return 0;
}
