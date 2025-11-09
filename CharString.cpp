#include <iostream>
#include <cstring> // For strlen()
using namespace std;

int main() {
    string str = "Hello world! This is ChatGPT."; // Predefined string

    // Calculate length of string
    int length = str.length();

    // Count words
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < length; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;  // Start of a new word
            wordCount++;
        } else if (str[i] == ' ') {
            inWord = false; // End of a word
        }
    }

    // Output results
    cout << "String: \"" << str << "\"" << endl;
    cout << "Length of string: " << length << endl;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
