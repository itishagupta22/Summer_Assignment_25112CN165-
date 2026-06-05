#include <iostream>
using namespace std;

int main() {
    int i, j, num, largestPrimeFactor = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            bool isPrime = true;

            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}