#include <iostream>

int main()
{
    int num, original, reverse = 0, digit;
    std::cout << "Enter a number: ";
    std::cin >> num;
    original = num;
    while(num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
    {
        std::cout << "Palindrome Number";
    }
    else
    {
        std::cout << "Not a Palindrome Number";
    }
    return 0;
}