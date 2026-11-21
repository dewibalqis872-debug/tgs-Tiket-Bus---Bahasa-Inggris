
#include <iostream>
#include <string>
using namespace std;

// Function to display the bus ticket menu
void displayTicketMenu() {
    cout << "==================================" << endl;
    cout << "         BUS BOOKING PROGRAM      " << endl;
    cout << "==================================" << endl;
    cout << "1. Malang - Surabaya" << endl;
    cout << "   Price : IDR 35000" << endl;
    cout << "2. Malang - Pasuruan" << endl;
    cout << "   Price : IDR 20000" << endl;
    cout << "3. Malang - Jombang" << endl;
    cout << "   Price : IDR 25000" << endl;
    cout << "==================================" << endl;
}

// Function to calculate the total price
int calculateTotal(int price, int quantity) {
    return price * quantity;
}

int main() {
    int choice, quantity, price = 0, total;
    string destination;

    displayTicketMenu();

    cout << "Choose destination (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            destination = "Malang - Surabaya";
            price = 35000;
            break;

        case 2:
            destination = "Malang - Pasuruan";
            price = 20000;
            break;

        case 3:
            destination = "Malang - Jombang";
            price = 25000;
            break;

        default:
            cout << "Invalid destination choice!" << endl;
            return 0;
    }

    cout << "Number of passengers: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid passenger quantity!" << endl;
        return 0;
    }

    total = calculateTotal(price, quantity);

    cout << endl;
    cout << "========== TICKET RECEIPT ==========" << endl;
    cout << "Destination       : " << destination << endl;
    cout << "Ticket price      : IDR " << price << endl;
    cout << "Number of tickets : " << quantity << endl;
    cout << "------------------------------------" << endl;
    cout << "Total payment     : IDR " << total << endl;
    cout << "====================================" << endl;
    cout << "Thank you for booking your ticket!" << endl;

    return 0;
}
