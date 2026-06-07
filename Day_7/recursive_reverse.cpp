#include <iostream>
using namespace std;

int rev = 0;

void reverse(int n) {
    if (n == 0)
        return;

    rev = rev * 10 + (n % 10);
    reverse(n / 10);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    reverse(n);

    cout << "Reversed number = " << rev;

    return 0;
}