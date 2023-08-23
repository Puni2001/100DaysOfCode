// Count the Number of Words in a String:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    string input;
    cout << "Enter the string: " << endl;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            count++; // Increment count when a space is encountered
        }
    }

    // Add 1 to count to account for the last word (since there's no space after it)
    count++;

    cout << "The Number of words in the string is: " << count << endl;

    return 0;
}
