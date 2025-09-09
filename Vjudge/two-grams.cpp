#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    unordered_map<string, int> freq;
    string best = "";
    int max_count = 0;

    for (int i = 0; i < n - 1; i++) {
        string two_gram = s.substr(i, 2);
        freq[two_gram]++;
        if (freq[two_gram] > max_count) {
            max_count = freq[two_gram];
            best = two_gram;
        }
    }

    cout << best << endl;
    return 0;
}
