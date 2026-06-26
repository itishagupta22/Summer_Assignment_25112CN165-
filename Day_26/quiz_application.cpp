#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "Q1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Jaipur\n4. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}