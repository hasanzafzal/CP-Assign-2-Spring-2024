#include <iostream>
using namespace std;

int calculatePower(int base, int power = 2) {
    float result = 1.0;
    while (power > 0) {
        if (power % 2 == 1) {
            result *= base;
        }
        base *= base;
        power /= 2;
    }
    return result;
}

int main() {
    int number, exp, result;
    cout << "Enter the base number: ";
    cin >> number;
    cout << "Enter the exponent: ";
    cin >> exp;
    result = calculatePower(number, exp);
    cout << number << " raised to the power of " << exp << " is: " << result << endl;
    return 0;
}