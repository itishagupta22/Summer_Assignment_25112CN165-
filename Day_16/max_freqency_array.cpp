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

    int maxFreq = 0, element;

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > maxFreq) {
            maxFreq = count;
            element = a[i];
        }
    }

    cout << "Element with maximum frequency = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}
