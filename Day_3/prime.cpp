#include <iostream>
using namespace std;

int main()
{
    int i, num;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1)
    {
        prime = false;
    }
    else
    {
        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if(prime)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
    return 0;
}
