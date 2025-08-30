#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(7 * N);
    for (int i = 0; i < 7 * N; i++) {
        cin >> A[i];
    }

    for (int week = 0; week < N; week++) {
        long long sum = 0;
        for (int day = 0; day < 7; day++) {
            sum += A[week * 7 + day];
        }
        cout << sum;
        if (week < N - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
