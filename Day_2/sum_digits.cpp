#include <iostream>

int main()
{
    int num, sum = 0, digit;
    std::cout << "Enter a number: ";
    std::cin >> num;
    while(num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    std::cout << "Sum of digits = " << sum;
    return 0;
}
