#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void ada_and_queue(const vector<vector<string>>& queries) {
    deque<int> queue;

    for (const auto& query : queries) {
        if (query[0] == "back") {
            if (!queue.empty()) {
                cout << queue.back() << endl;
                queue.pop_back();
            } else {
                cout << "No job for Ada?" << endl;
            }
        } else if (query[0] == "front") {
            if (!queue.empty()) {
                cout << queue.front() << endl;
                queue.pop_front();
            } else {
                cout << "No job for Ada?" << endl;
            }
        } else if (query[0] == "reverse") {
            reverse(queue.begin(), queue.end());
        } else if (query[0] == "push_back") {
            int N = stoi(query[1]);
            queue.push_back(N);
        } else if (query[0] == "toFront") {
            int N = stoi(query[1]);
            queue.push_front(N);
        }
    }
}

int main() {
    int Q;
    cin >> Q;

    vector<vector<string>> queries(Q, vector<string>(2));

    for (int i = 0; i < Q; ++i) {
        cin >> queries[i][0];
        if (queries[i][0] == "toFront" || queries[i][0] == "push_back") {
            cin >> queries[i][1];
        }
    }

    ada_and_queue(queries);

    return 0;
}
