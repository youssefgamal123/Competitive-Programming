#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // getting min number in array
    int min = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    // checking how many times the number got counted, if it's odd then print lucky
    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (min == nums[i]) {
            counter++;
        }
    }

    if (counter % 2 != 0) {
        // odd_count
        cout << "Lucky";
    } else {
        cout << "Unlucky";
    }

    return 0;
}
