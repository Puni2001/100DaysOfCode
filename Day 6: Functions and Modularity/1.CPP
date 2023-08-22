// Write a Function to Find the Factorial of a Number

#include<bits/stdc++.h>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact; // Return the calculated factorial value
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int result = factorial(n); // Call the function and store the result
    cout << "The Factorial of " << n << " is: " << result << endl;

    return 0;
}
