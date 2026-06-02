#include <iostream>

int main()
{
    int num, digit, product = 1;
    std::cout << "Enter a number: ";
    std::cin >> num;
    while(num > 0)
    {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    std::cout << "Product of digits = " << product;
    return 0;
}