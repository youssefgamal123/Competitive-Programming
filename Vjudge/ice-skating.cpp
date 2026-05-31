#include <iostream>
#include <vector>

using namespace std;

int n;

vector<pair<int,int>> points;

vector<bool> visited;

void dfs(int node) {

    visited[node] = true;

    for (int i = 0; i < n; i++) {

        if (!visited[i]) {

            // same x OR same y
            if (points[i].first == points[node].first ||
                points[i].second == points[node].second) {

                dfs(i);
                }
        }
    }
}

int main() {

    cin >> n;

    points.resize(n);
    visited.resize(n, false);

    for (int i = 0; i < n; i++) {

        cin >> points[i].first >> points[i].second;
    }

    int components = 0;

    for (int i = 0; i < n; i++) {

        if (!visited[i]) {

            components++;

            dfs(i);
        }
    }

    cout << components - 1;
}