#include <iostream>
using namespace std;

int main() {
    int r, c, i, j;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for (j = 0; j < c; j++) {
        int sum = 0;

        for (i = 0; i < r; i++) {
            sum += a[i][j];
        }

        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}