#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

void reverseWords(string& s) {
    stringstream ss(s);
    string word;
    s = ""; // Clear the original string

    while (ss >> word) {
        reverse(word.begin(), word.end());
        s += word + " ";
    }

    // Remove the trailing space
    if (!s.empty()) {
        s.pop_back();
    }
}

int main() {
    string S;
    getline(cin, S);

    reverseWords(S);

    cout << S << endl;

    return 0;
}
