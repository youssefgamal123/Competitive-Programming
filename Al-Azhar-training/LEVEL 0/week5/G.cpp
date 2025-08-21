#include <iostream>
#include <string>
#include <cctype> // For the islower and isupper functions

using namespace std;

int main() {
    string s;
    cin >> s;

    for (char& c : s) {
        if (c == ',') {
            c = ' '; // Replace comma with space
        } else if (islower(c)) {
            c = toupper(c); // Convert lowercase to uppercase
        } else if (isupper(c)) {
            c = tolower(c); // Convert uppercase to lowercase
        }
    }

    cout << s;

    return 0;
}
