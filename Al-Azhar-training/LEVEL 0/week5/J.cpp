#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // Using an array to count occurrences of each letter
    int letterCount[26] = {0};

    // Count occurrences
    for (char c : s) {
        if ('a' <= c && c <= 'z') {
            letterCount[c - 'a']++;
        }
    }

    // Print results in ascending order
    for (char c = 'a'; c <= 'z'; ++c) {
        if (letterCount[c - 'a'] > 0) {
            cout << c << " : " << letterCount[c - 'a'] << endl;
        }
    }

    return 0;
}
