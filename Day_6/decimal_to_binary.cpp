#include <iostream>
using namespace std;

int main() 
{
    int n, b = 0, p = 1, r;
    cout << "Enter a decimal number ";
    cin >> n;

    while (n > 0) {
        r = n % 2;
        b = b + r * p;
        p = p * 10;
        n = n / 2;
    }
    cout << "Binary number is = " << b;
    return 0;
}