#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Check if the string contains "010" or "101" as substrings
        if (s.find("010") != string::npos || s.find("101") != string::npos) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    } //

    return 0;
}
