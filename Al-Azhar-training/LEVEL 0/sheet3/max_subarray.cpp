#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[100]; // Assuming maximum array size is 100

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Output the maximum number for each sub-array
        for (int i = 0; i < n; ++i) {
            int maxNum = arr[i];
            for (int j = i; j < n; ++j) {
                maxNum = max(maxNum, arr[j]);
                cout << maxNum << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
