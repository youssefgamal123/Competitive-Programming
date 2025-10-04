#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Friend {
    long long money, factor;
};

int main() {
    int n;
    long long d;
    cin >> n >> d;

    vector<Friend> friends(n);
    for (int i = 0; i < n; i++) {
        cin >> friends[i].money >> friends[i].factor;
    }

    sort(friends.begin(), friends.end(), [](const Friend &a, const Friend &b) {
        return a.money < b.money;
    });

    long long sum = 0, ans = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        sum += friends[right].factor;

        while (friends[right].money - friends[left].money >= d) {
            sum -= friends[left].factor;
            left++;
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
    return 0;
}
