#include <iostream>
using namespace std;

int countWords(string& s) {
    int wordCount = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {
            // Character is a letter, inside a word
            inWord = true;
        } else if (inWord) {
            // Character is not a letter, but we were in a word
            wordCount++;
            inWord = false;
        }
    }

    // Check if the last character is part of a word
    if (inWord) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    string S;
    getline(cin, S);

    int words = countWords(S);
    cout << words << endl;

    return 0;
}
