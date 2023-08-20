// Check if a String is Palindrome

#include <iostream>
using namespace std;

int main() {
    
    string input;
    cout << "Enter a string: "<<endl;
    getline(cin, input);

    bool isPalindrome = true;
    int left = 0;
    int right = input.length() - 1;

    while (left < right) {
        if (input[left] != input[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

