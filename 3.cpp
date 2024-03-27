#include <iostream>
using namespace std;

int Armstrongnum(int num) {
    int originalnum = num;
    int sum = 0;
    int numDigits = 0;
    while (num > 0) {
        numDigits++;
        num /= 10;
    }
    num = originalnum;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return originalnum == sum;
}
int main() {
    cout << "Armstrong numbers between 1 and 500:" << endl;
    for (int num = 1; num <= 500; num++) {
        if (Armstrongnum(num)) {
            cout << num << endl;
        }
    }
    return 0;
}