#include <iostream>
using namespace std;
int main() {
    int i,length =0;
    char str[100];
    bool palindrome = true;
    cout << "Enter a string : ";
    cin >> str;
     while (str[length] != '\0'){
        length++;
     }
     for (i= 0; i <= length/2 ; i++){
          if (str[i] != str[length - 1 - i]) {
            palindrome = false;
            break;
     }
    }
    if (palindrome){
        cout << "The entered string is a palindrome ";
    }
    else {
        cout << "The entered string is not a palindrome ";
    }
    return 0;

}