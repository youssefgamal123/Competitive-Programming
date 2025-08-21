#include <iostream>
using namespace std;

int main() {
    int N, even_num = 0, odd_num = 0, positive_num = 0, negative_num = 0;

    cin >> N;

    int nums[N];

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        if (nums[i] % 2 == 0) {
            even_num++;
        } else {
            odd_num++;
        }

        if (nums[i] > 0) {
            positive_num++;
        } else if (nums[i] < 0) {
            negative_num++;
        }
    }

    cout << "Even: " << even_num << endl
         << "Odd: " << odd_num << endl
         << "Positive: " << positive_num << endl
         << "Negative: " << negative_num;

    return 0;
}
