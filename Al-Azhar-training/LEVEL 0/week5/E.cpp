#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (char digit : s) {
        // Convert character to integer and add to sum
        sum += digit - '0';
    }

    cout << sum << endl;

    return 0;
}
