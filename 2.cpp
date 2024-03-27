#include <iostream>
using namespace std;

int main() {
    char code;
    int operation, number, year, distance, amount, total, firstValue, secondValue;
    float cost, rate;
    bool isLeapYear;
    cout << "Enter code (T): ";
    cin >> code;
    if (code == 'T') {
        cout << "Enter price: ";
        cin >> amount;
        cout << "Enter tax rate (percentage): ";
        cin >> rate;
        rate /= 100;
        total = amount + amount * rate;
        cout << "Price including tax: " << total << endl;
    }
    cout << "Enter operation (1): ";
    cin >> operation;
    if (operation == 1) {
        cout << "Enter two numbers: ";
        cin >> firstValue >> secondValue;
        total = firstValue + secondValue;
        cout << "Sum: " << total << endl;
    }
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 1) {
        number = 3 * number + 1;
    }
    else {
        number /= 2;
    }
    cout << "Modified number: " << number << endl;
    cout << "Enter year: ";
    cin >> year;
    isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    if (isLeapYear) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }
    cout << "Enter distance: ";
    cin >> distance;
    if (distance >= 0 && distance <= 100) {
        cost = 5.00;
    }
    else if (distance > 100 && distance <= 500) {
        cost = 8.00;
    }
    else if (distance > 500 && distance < 1000) {
        cost = 10.00;
    }
    else {
        cost = 12.00;
    }
    cout << "Cost: " << cost << endl;

    return 0;
}