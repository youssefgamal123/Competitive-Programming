#include <iostream>
#include <string>
using namespace std;

void check(const string &input) {
    int open_round = 0, open_square = 0;
    int max_operations = 0;

    for (char ch : input) {
        if (ch == '(') {
            open_round++;
        } else if (ch == ')') {
            if (open_round > 0) {
                open_round--;
                max_operations++;
            }
        } else if (ch == '[') {
            open_square++;
        } else if (ch == ']') {
            if (open_square > 0) {
                open_square--;
                max_operations++;
            }
        }
    }

    cout << max_operations << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string input;
        cin >> input;
        check(input);
    }
    return 0;
}
