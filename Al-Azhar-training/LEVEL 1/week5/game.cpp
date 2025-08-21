#include <iostream>
using namespace std;

int main() {
    int n, test_cases;
    cin >> n >> test_cases;

    int numbers[n];
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    while (test_cases--) {
        int item;
        cin >> item;

        int left = 0, right = n - 1,ans = -1; // Reset left and right for each test case

        while (left <= right) {
            int mid = (left + right) / 2;

            if (numbers[mid]>item) {
              ans = numbers[mid];
             right = mid - 1;
           }
           else {
             left = mid + 1;
           }

        }

      cout<<ans<<endl;
    }

    return 0;
}
