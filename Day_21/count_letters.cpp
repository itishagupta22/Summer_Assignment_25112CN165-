#include <iostream>
using namespace std;

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;

    return 0;
}