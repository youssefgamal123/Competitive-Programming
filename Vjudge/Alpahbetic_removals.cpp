#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n , k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    // Count frequency of each letter
    for (char ch : s) freq[ch - 'a']++;

        vector<int> to_remove(26, 0);
    for (int i = 0; i < 26 && k > 0; i++) {
        int remove_now = min(freq[i], k); // remove as many as we can
        to_remove[i] = remove_now;
        k -= remove_now;
    }

    string result = "";
    for (char ch : s) {
        int idx = ch - 'a';
        if (to_remove[idx] > 0) {
            to_remove[idx]--; // remove this letter
            continue; // skip it
        }
        result += ch; // keep this letter
    }

    cout << result << endl;
}
