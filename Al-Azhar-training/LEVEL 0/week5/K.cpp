#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int minLen = min(a.length(), b.length());

        for (int i = 0; i < minLen; i++) {
            cout << a[i] << b[i];
        }

        // Append remaining characters of the longer string
        for (int i = minLen; i < a.length(); i++) {
            cout << a[i];
        }

        for (int i = minLen; i < b.length(); i++) {
            cout << b[i];
        }

        cout << endl;
    }

    return 0;
}
