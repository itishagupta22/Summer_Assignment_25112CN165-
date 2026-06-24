#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string longest = "", current = "";

    for (char ch : str)
    {
        if (ch != ' ')
        {
            current += ch;
        }
        else
        {
            if (current.length() > longest.length())
                longest = current;
            current = "";
        }
    }

    if (current.length() > longest.length())
        longest = current;

    cout << "Longest word: " << longest;

    return 0;
}