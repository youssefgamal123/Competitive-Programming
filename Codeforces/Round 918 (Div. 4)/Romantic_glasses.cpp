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
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long oddSum = 0, evenSum = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                oddSum += a[i];
            } else {
                evenSum += a[i];
            }
            if(oddSum == evenSum) {
                cout << "YES\n";
                break;
            }
        }
        if(oddSum != evenSum) {
            cout << "NO\n";
        }
    }
    return 0;
}
