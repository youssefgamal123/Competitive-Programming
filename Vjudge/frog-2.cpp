#include <iostream>
#include <vector>
using namespace std;

int n,k;
vector<int> heights;
vector<int> memo;

int solve(int index) {

    if (index == n-1 ) {
        return 0;
    }

    if (memo[index]!=-1) {
        return memo[index];
    }

    int best = 1e9;

    for (int j = 1; j <= k; j++) {

        if (index + j < n) {
            int cost = solve(index + j) + abs(heights[index] - heights[index + j]);
            best = min(best, cost);
        }

    }

    return memo[index] = best;
}

int main () {

    cin>>n>>k;

    heights.resize(n);

    for (int i = 0 ; i < n ; i++) {
        cin>>heights[i];
    }

    memo.resize(n,-1);

    cout << solve(0);

}