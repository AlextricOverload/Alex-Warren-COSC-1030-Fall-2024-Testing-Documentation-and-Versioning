#include <iostream>
using namespace std;

int exponent(int x, int y) {
    int product = 1;
    int timesMult = 0;

    if (y == 0) {
        // Any number to the power of 0 is 1
        return 1;
    }
    while (timesMult < y) {
        product *= x;
        timesMult++;
    }
    return product;
}

int main() {
    int x;
    int y;
    cout << "This is a program to calculate an exponent manually" << endl;
    cout << "Enter the base: " << endl;
    cin >> x;
    cout << "Enter the exponent: " << endl;
    cin >> y;
    cout << "The product of " << x << " to the power of " << y << " is " << exponent(x, y) << endl;

    return 0;
}
