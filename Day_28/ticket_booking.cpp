#include <iostream>
using namespace std;

int main() {
    int totalTickets = 50;
    int choice, tickets;

    cout << "----- Ticket Booking System -----" << endl;
    cout << "1. Book Ticket" << endl;
    cout << "2. Cancel Ticket" << endl;
    cout << "3. Check Available Tickets" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter number of tickets to book: ";
            cin >> tickets;

            if (tickets <= totalTickets) {
                totalTickets -= tickets;
                cout << "Booking Successful!" << endl;
                cout << "Available Tickets = " << totalTickets;
            }
            else {
                cout << "Not enough tickets available.";
            }
            break;

        case 2:
            cout << "Enter number of tickets to cancel: ";
            cin >> tickets;

            totalTickets += tickets;

            cout << "Cancellation Successful!" << endl;
            cout << "Available Tickets = " << totalTickets;
            break;

        case 3:
            cout << "Available Tickets = " << totalTickets;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}