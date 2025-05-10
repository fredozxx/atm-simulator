#include <iostream>
using namespace std;

// Function prototypes
void checkBalance(double balance);
void deposit(double &balance, double amount);
void withdraw(double &balance, double amount);

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    cout << "===== Welcome to the ATM =====\n";

    while (true) {
        // Display the menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                deposit(balance, amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                withdraw(balance, amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Function to check the balance
void checkBalance(double balance) {
    cout << "Current balance: $" << balance << endl;
}

// Function to deposit money
void deposit(double &balance, double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful! New balance: $" << balance << endl;
    } else {
        cout << "Invalid deposit amount. Please enter a positive number.\n";
    }
}

// Function to withdraw money
void withdraw(double &balance, double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful! New balance: $" << balance << endl;
    } else if (amount > balance) {
        cout << "Insufficient funds. You only have $" << balance << " available.\n";
    } else {
        cout << "Invalid withdrawal amount. Please enter a positive number.\n";
    }
}
