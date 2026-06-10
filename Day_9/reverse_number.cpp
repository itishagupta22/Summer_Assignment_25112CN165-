#include <iostream>
using namespace std;

int main () {
    int i, j, n;
    cout << "Enter the desired number of rows : ";
    cin >> n;
    
     for (i=n; i <= n; i--){
        for (j=1; j <= i; j++) {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
