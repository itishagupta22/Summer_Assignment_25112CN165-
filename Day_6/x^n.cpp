#include <iostream>
using namespace std;

int main () {
    int x, n, i, ans = 1;
    
    cout << "Enter base vale = ";
    cin >> x;
    cout << "Enter value of exponent = ";
    cin >> n;
 for (i = 0; i <= n; i++) {
        ans = ans * x;
    }
    cout << "Result = " << ans;
    return 0;
}
