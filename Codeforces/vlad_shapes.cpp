#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        bool hasSquare = true;
        bool hasTriangle = true;

        // Check if all 1's form a square
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    if (i > 0 && j > 0 && grid[i - 1][j] == '1' && grid[i][j - 1] == '1') {
                        continue;
                    } else {
                        hasSquare = false;
                        break;
                    }
                }
            }
            if (!hasSquare) {
                break;
            }
        }

        // Check if all 1's form a triangle
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    if (i > 0 && j > 0 && grid[i - 1][j] == '1' && grid[i][j - 1] == '1') {
                        hasTriangle = false;
                        break;
                    }
                }
            }
            if (!hasTriangle) {
                break;
            }
        }

        if (hasSquare) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
