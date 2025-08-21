#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(2 * n);
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            points[2 * i] = {a, 1};
            points[2 * i + 1] = {b, -1};
        }
        sort(points.begin(), points.end());
        int greetings = 0, cnt = 0, arrived = 0;
        for(auto& p : points) {
            if(p.second > 0) {
                greetings += cnt - arrived;
                cnt++;
            } else {
                arrived++;
            }
        }
        cout << greetings << "\n";
    }
    return 0;
}
