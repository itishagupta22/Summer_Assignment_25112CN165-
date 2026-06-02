#include <iostream>

int main()
{
    int num, reverse = 0, digit;
    std::cout << "Enter a number: ";
    std::cin >> num;
    while(num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    std::cout << "Reversed number = " << reverse;
    return 0;
}