#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int bookID[n];
    string bookName[n];
    string author[n];
    bool available[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> bookID[i];

        cout << "Book Name: ";
        cin >> bookName[i];

        cout << "Author Name: ";
        cin >> author[i];

        available[i] = true;
    }

    int choice;

    do {
        cout << "\n------ MINI LIBRARY SYSTEM ------" << endl;
        cout << "1. Display Books" << endl;
        cout << "2. Search Book" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:

            cout << "\nLibrary Books\n";

            for (int i = 0; i < n; i++) {

                cout << "\nBook ID : " << bookID[i] << endl;
                cout << "Book Name : " << bookName[i] << endl;
                cout << "Author : " << author[i] << endl;

                if (available[i])
                    cout << "Status : Available" << endl;
                else
                    cout << "Status : Issued" << endl;
            }

            break;

        case 2: {

            int searchID;
            bool found = false;

            cout << "Enter Book ID to search: ";
            cin >> searchID;

            for (int i = 0; i < n; i++) {

                if (bookID[i] == searchID) {

                    cout << "\nBook Found\n";
                    cout << "Book Name : " << bookName[i] << endl;
                    cout << "Author : " << author[i] << endl;

                    if (available[i])
                        cout << "Status : Available" << endl;
                    else
                        cout << "Status : Issued" << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found";

            break;
        }

        case 3: {

            int issueID;
            bool found = false;

            cout << "Enter Book ID to issue: ";
            cin >> issueID;

            for (int i = 0; i < n; i++) {

                if (bookID[i] == issueID) {

                    found = true;

                    if (available[i]) {

                        available[i] = false;

                        cout << "Book Issued Successfully";
                    }

                    else {

                        cout << "Book Already Issued";
                    }

                    break;
                }

            }

            if (!found)
                cout << "Book Not Found";

            break;
        }

        case 4: {

            int returnID;
            bool found = false;

            cout << "Enter Book ID to return: ";
            cin >> returnID;

            for (int i = 0; i < n; i++) {

                if (bookID[i] == returnID) {

                    found = true;

                    if (!available[i]) {

                        available[i] = true;

                        cout << "Book Returned Successfully";
                    }

                    else {

                        cout << "Book is already available";
                    }

                    break;
                }

            }

            if (!found)
                cout << "Book Not Found";

            break;
        }

        case 5:

            cout << "Thank You!";
            break;

        default:

            cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}