#include <iostream>
using namespace std;

int main() {
    int i, num;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << " are: ";

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}