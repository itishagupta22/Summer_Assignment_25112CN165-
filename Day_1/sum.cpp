#include <iostream>

int main()
{
    int n, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    std::cout << "Sum = " << sum;
    return 0;
}