#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    deque<pair<long long, long long>> dq;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x, c;
            cin >> x >> c;
            dq.push_back({x, c});
        }
        else { // type == 2
            long long c;
            cin >> c;
            long long sum = 0;

            while (c > 0) {
                auto [val, cnt] = dq.front();
                dq.pop_front();

                if (cnt <= c) {
                    sum += val * cnt;
                    c -= cnt;
                } else {
                    sum += val * c;
                    dq.push_front({val, cnt - c});
                    c = 0;
                }
            }
            cout << sum << "\n";
        }
    }
    return 0;
}
