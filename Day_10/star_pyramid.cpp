#include <iostream>
using namespace std;
 
int main ()
 {
    int n, i, j;
    cout << "enter the desired number of rows = ";
    cin >> n;
    for (i=0;i<=n;i++){
        for (j=0;j<=n-i;j++){
            cout << " ";
        }
         for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}