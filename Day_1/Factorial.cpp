#include <iostream>
int main()
{
    int n, factorial = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    std::cout << "Factorial = " << factorial;
    return 0;
}