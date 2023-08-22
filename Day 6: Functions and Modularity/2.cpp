// Write a Function to Check Prime Numbers

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false; // If n is divisible by i, then it's not prime
        }
    }

    return true; // If no divisors found, n is prime
}

int main() {
    int n;
    cout << "Enter the Number to check if it's Prime or not: ";
    cin >> n;

    bool result = isPrime(n);
    if (result) {
        cout << "The Given Number is Prime." << endl;
    } else {
        cout << "The Given Number is Not Prime." << endl;
    }

    return 0;
}
