#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    int a[100][100], b[100][100], multiply[100][100];

    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            multiply[i][j] = 0;

            for (k = 0; k < c1; k++) {
                multiply[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Product matrix:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << multiply[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
