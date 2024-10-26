#include <iostream>
using namespace std;
#include <cassert>
#include <cmath>

// Function to manually calculate an exponent
int exponent(int x, int y) {
    int product = 1;
    int timesMult = 0;

    if (y == 0) {
        // Any number to the power of 0 is 1
        return 1;
    }
    if (x == 0) {
        // 0 to any power is just 0
        return 0;
    }
    while (timesMult < y) {
        product *= x;
        timesMult++;
    }
    return product;
}

// Test harness for exponent funciton
int main() {
    cout << "Manual_exponent :: testing started" << endl;

    assert(exponent(0, 1) == pow(0, 1));
    assert(exponent(2, 0) == pow(2, 0));
    assert(exponent(5, 10) == pow(5, 10));
    assert(exponent(3, 2) == pow(3, 2));

    cout << "Manual_exponent :: testing succeeded" << endl;
    return 0;
}