#include <iostream>
#include <vector>
using namespace std;


int n;
vector<long long> a;
long long cnt = 0;

void solve (int index, int even,int odd) {
    if (index == n) {
        if (even > odd && (even + odd > 0)) cnt++;
        return;         // base case
    }


    solve (index +1 ,even , odd);


    // state take transitions

    if (a[index] % 2 == 0 ) {
        solve (index +1 ,even+1 , odd);
    }
    else {
        solve (index +1 ,even , odd+1);
    }


}





int main () {


    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    solve(0, 0, 0);
    cout << cnt << "\n";



}