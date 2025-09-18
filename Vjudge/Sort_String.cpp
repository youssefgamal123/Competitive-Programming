#include <iostream>
#include <vector>
using namespace std;

void sortStr(const string &s, const vector<char> &sortedLetters) {
    vector<int> freq(26, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    string result;
    result.reserve(s.size());

    for (char letter : sortedLetters) {
        int cnt = freq[letter - 'a'];
        if (cnt > 0) {
            result.append(cnt, letter);
        }
    }

    cout << result << "\n";
}

int main() {
    vector<char> letters;
    for (char c = 'a'; c <= 'z'; ++c) {
        letters.push_back(c);
    }

    int n;
    cin >> n;
    string s;
    cin >> s;

    sortStr(s, letters);
    return 0;
}
