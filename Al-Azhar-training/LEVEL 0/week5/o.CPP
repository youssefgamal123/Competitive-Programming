#include <iostream>
using namespace std;

void sortString(string& s) {
    int n = s.length();

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                // Swap characters
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    // Sort the string
    sortString(S);

    // Print the sorted string
    cout << S << endl;

    return 0;
}
