#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
string s;

int answer;

int dfs(int node) {

    int sum = 0;

    // own color
    if (s[node] == 'W')
        sum += 1;
    else
        sum -= 1;

    // children contribution
    for (int child : adj[node]) {

        sum += dfs(child);
    }

    // balanced subtree
    if (sum == 0)
        answer++;

    return sum;
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        adj.clear();
        adj.resize(n + 1);

        for (int i = 2; i <= n; i++) {

            int parent;
            cin >> parent;

            adj[parent].push_back(i);
        }

        cin >> s;

        // make string 1-indexed
        s = " " + s;

        answer = 0;

        dfs(1);

        cout << answer << endl;
    }
}