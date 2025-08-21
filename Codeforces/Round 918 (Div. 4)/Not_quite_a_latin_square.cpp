#include <iostream>
#include <vector>

using namespace std;

char findMissingLetter(vector<string>& square) {
    int row_count[3] = {0};
    int col_count[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char currentChar = square[i][j];
            if (currentChar != '?') {
                row_count[i]++;
                col_count[j]++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (row_count[i] == 2) {
            for (char ch = 'A'; ch <= 'C'; ch++) {
                if (square[i].find(ch) == string::npos) {
                    return ch;
                }
            }
        }

        if (col_count[i] == 2) {
            for (char ch = 'A'; ch <= 'C'; ch++) {
                bool found = false;
                for (int j = 0; j < 3; j++) {
                    if (square[j][i] == ch) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return ch;
                }
            }
        }
    }

    return ' '; // This should not be reached
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> square(3);
        for (int i = 0; i < 3; i++) {
            cin >> square[i];
        }

        char missingLetter = findMissingLetter(square);
        cout << missingLetter << endl;
    }

    return 0;
}
