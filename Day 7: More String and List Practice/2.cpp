// Find the Longest Word in a Sentence:

#include<bits/stdc++.h>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence); // Create a stringstream to split the sentence
    string word;
    string longestWord = ""; // Initialize the longestWord to an empty string

    while (ss >> word) { // Read words from the stringstream
        if (word.length() > longestWord.length()) {
            longestWord = word; // Update longestWord if a longer word is found
        }
    }

    cout << "The longest word in the sentence is: " << longestWord << endl;

    return 0;
}
