#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> result;
    for (int i = 0; i < N - 1; i++) {
        result.push_back(A[i]);
        if (A[i] < A[i + 1]) {
            for (int x = A[i] + 1; x < A[i + 1]; x++) {
                result.push_back(x);
            }
        } else if (A[i] > A[i + 1]) {
            for (int x = A[i] - 1; x > A[i + 1]; x--) {
                result.push_back(x);
            }
        }
    }
    result.push_back(A[N - 1]);

    for (int i = 0; i < result.size(); i++) {
        if (i) cout << " ";
        cout << result[i];
    }
    cout << endl;
}
