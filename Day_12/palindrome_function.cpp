#include <iostream>
using namespace std;

bool palindrome(int n) {
    int temp = n, rev = 0, r;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    return (temp == rev);
}
int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;
    if (palindrome(n))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
    return 0;
}
