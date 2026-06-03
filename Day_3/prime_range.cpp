#include <iostream>
using namespace std;

int main()
{
    int i, num, start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for(num = start; num <= end; num++)
    {
        int count = 0;

        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            cout << num << " ";
        }
    }

    return 0;
}