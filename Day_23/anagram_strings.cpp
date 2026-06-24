#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    bool anagram = true;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int i = 0;

    while (str1[i] != '\0') {
        count1[str1[i] - 'a']++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0') {
        count2[str2[i] - 'a']++;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Anagram Strings";
    else
        cout << "Not Anagram Strings";

    return 0;
}
