#include <iostream>
using namespace std;

bool armstrong(int n) {
    int temp = n, sum = 0, r;

    while (n > 0) {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    return (temp == sum);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;
    if (armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
