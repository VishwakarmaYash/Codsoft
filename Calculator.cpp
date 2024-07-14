#include <iostream>
using namespace std;

void showMenu() {
    cout << "\nSimple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}

void addition() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

void subtraction() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

void multiplication() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

void division() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 != 0) {
        cout << "Result: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

int main() {
    int choice;

    while (true) {
        showMenu();
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
