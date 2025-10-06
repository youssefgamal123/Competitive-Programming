#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

long long minDiff = LLONG_MAX;
int n;
vector<long long> apples;

void divide(int index, long long sum1, long long sum2) {
    if (index == n) {
        long long diff = abs(sum1 - sum2);
        minDiff = min(minDiff, diff);
        return;
    }

    divide(index + 1, sum1 + apples[index], sum2); // transition 1

    divide(index + 1, sum1, sum2 + apples[index]); // transisstion 2
}

int main() {
    cin >> n;
    apples.resize(n);

    for (int i = 0; i < n; i++)
        cin >> apples[i];

    divide(0, 0, 0);

    cout << minDiff << endl;
    return 0;
}
