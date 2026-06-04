#include <iostream>
using namespace std;

int main()
{
    int num, start, temp, sum, digit, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for(num = start; num <= end; num++)
    {
        temp = num;
         sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum == num)
        {
            cout << num << " ";
        }
    }

    return 0;
}