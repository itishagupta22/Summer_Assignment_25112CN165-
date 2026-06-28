#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int bookID[n];
    string title[n], author[n];

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> bookID[i];

        cout << "Enter Book Title: ";
        cin >> title[i];

        cout << "Enter Author Name: ";
        cin >> author[i];
    }

    cout << "\nLibrary Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID     : " << bookID[i] << endl;
        cout << "Book Title  : " << title[i] << endl;
        cout << "Author Name : " << author[i] << endl;
    }
    return 0;
}