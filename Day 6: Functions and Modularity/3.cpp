// Write a Function to Calculate the Power of a Number

#include<bits/stdc++.h>
using namespace std;

int calculatePower(int base, int exponent) {
    int result = 1;
    if (exponent == 0)
        return 1;
    for (int i = 0 ; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;

    int result = calculatePower(base, exponent);

    cout << "The answer is: " << result << endl;

    return 0;
}
