#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> pos[n + 1];
    queue<int> del;
    vector<queue<int>> cy(m);

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        while (k--) {
            int col;
            cin >> col;
            cy[i].push(col);
        }
    }

    for (int i = 0; i < m; i++) {
        int col = cy[i].front();
        pos[col].push_back(i);
        if (pos[col].size() == 2) {
            del.push(col);
        }
    }

    while (!del.empty()) {
        int col = del.front();
        del.pop();
        int a = pos[col][0], b = pos[col][1];
        pos[col].clear();

        cy[a].pop();
        cy[b].pop();

        if (!cy[a].empty()) {
            int color = cy[a].front();
            pos[color].push_back(a);
            if (pos[color].size() == 2) {
                del.push(color);
            }
        }
        if (!cy[b].empty()) {
            int color = cy[b].front();
            pos[color].push_back(b);
            if (pos[color].size() == 2) {
                del.push(color);
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (!cy[i].empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
