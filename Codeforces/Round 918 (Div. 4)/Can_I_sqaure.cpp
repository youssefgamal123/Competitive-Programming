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
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }
        long long root = sqrt(sum);
        if(root * root == sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
