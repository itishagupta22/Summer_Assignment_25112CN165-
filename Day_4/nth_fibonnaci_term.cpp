#include <iostream>
using namespace std;

int main()
{
    int i, n, a = 0, b = 1, c;

    cout << "Enter the value of n: ";
    cin >> n;

    if(n == 1)
    {
        cout << a;
    }
    else if(n == 2)
    {
        cout << b;
    }
    else
    {
        for(i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout << c;
    }

    return 0;
}
