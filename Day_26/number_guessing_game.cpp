#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess the number (1 to 100): ";

    do {
        cin >> guess;

        if (guess > number)
            cout << "Too High! Try Again: ";
        else if (guess < number)
            cout << "Too Low! Try Again: ";
        else
            cout << "Congratulations! You guessed the correct number.";
    } while (guess != number);

    return 0;
}