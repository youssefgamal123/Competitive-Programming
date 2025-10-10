#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    queue<long long> q;
    q.push(1);
    int count = 0;

    while (!q.empty()) {
        long long x = q.front();
        q.pop();
        if (x > n) continue;
        count++;
        q.push(x * 10);
        q.push(x * 10 + 1);
    }

    cout << count << endl;
}
