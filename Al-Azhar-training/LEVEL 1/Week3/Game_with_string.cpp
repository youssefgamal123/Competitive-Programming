#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int consecutive = 1; // Initialize consecutive count to 1
    char lastChar = s[0];
    bool isFirstPlayer = true; // Player 1 starts the game

    // Iterate through the string starting from the second character
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == lastChar) {
            consecutive++; // Increase the count of consecutive equal letters
        } else {
            // If the count of consecutive equal letters is odd, the first player wins
            if (consecutive % 2 == 1) {
                isFirstPlayer = false;
                break;
            }
            consecutive = 1; // Reset the count for a new consecutive sequence
            lastChar = s[i]; // Update the last character
        }
    }

    // Check the count of consecutive equal letters at the end of the string
    if (consecutive % 2 == 1) {
        isFirstPlayer = false;
    }

    // Output the result based on the winner
    if (isFirstPlayer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
