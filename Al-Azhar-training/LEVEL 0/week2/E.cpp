#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // Read input
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    // Iterate through possible values for the gems
    for (int a = 1; a <= 9; ++a) {
        for (int b = 1; b <= 9; ++b) {
            for (int c = 1; c <= 9; ++c) {
                for (int d = 1; d <= 9; ++d) {
                    // Check if all numbers are different
                    if (a != b && a != c && a != d && b != c && b != d && c != d) {
                        // Check row and column sums
                        if (a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 &&
                            a + d == d1 && b + c == d2) {
                            // Output the solution
                            cout << a << " " << b << endl;
                            cout << c << " " << d << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    // If no solution is found
    cout << "-1" << endl;

    return 0;
}
