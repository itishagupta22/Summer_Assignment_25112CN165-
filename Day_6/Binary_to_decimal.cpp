#include <iostream>
using namespace std;

int main() 
{
    int n, d = 0, p = 1, r;
    cout << "Enter a binary number ";
    cin >> n;

    while (n > 0) {
        r = n % 10;
        d = d + r * p;
        p = p * 2;
        n = n / 10;
    }
    cout << "Decimal number is = " << d;
    return 0;
}