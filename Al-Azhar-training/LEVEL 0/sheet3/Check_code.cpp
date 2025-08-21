#include <iostream>
#include <string>

using namespace std;

int main() {
    // Read input values A, B
    int A, B;
    cin >> A >> B;

    // Read the code S
    string S;
    cin >> S;

    // Check if the code follows the rules
    bool isValid = true;

    // Rule 1: The (A+1)-th character of the code is '-'
    if (S[A] != '-') {
        isValid = false;
    }

    // Rule 2: All other characters are digits (0-9)
    for (int i = 0; i < A + B + 1; i++) {
        if (i != A && (S[i] < '0' || S[i] > '9')) {
            isValid = false;
            break;
        }
    }

    // Output the result
    if (isValid) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
