#include <iostream>
using namespace std;

bool perfect(int n) {
    int sum = 0, i;

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return (sum == n);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (perfect(n))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";
    return 0;
}