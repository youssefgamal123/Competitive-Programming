#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int T_count = 0, A_count = 0;
    int final_T = 0, final_A = 0;

    // Count final totals
    for (char c : S) {
        if (c == 'T') final_T++;
        else final_A++;
    }

    if (final_T > final_A) {
        cout << "T\n";
        return 0;
    } else if (final_A > final_T) {
        cout << "A\n";
        return 0;
    }

    T_count = 0, A_count = 0;
    for (char c : S) {
        if (c == 'T') T_count++;
        else A_count++;

        if (T_count == final_T) {
            cout << "T\n";
            return 0;
        } else if (A_count == final_A) {
            cout << "A\n";
            return 0;
        }
    }
}
