#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int timeToPrint(const vector<int>& priorities, int position) {
    int minutes = 0;
    queue<pair<int, int>> jobs; // (priority, position)

    // Push jobs into the queue
    for (int i = 0; i < priorities.size(); ++i) {
        jobs.push({priorities[i], i});
    }

    while (!jobs.empty()) {
        int priority = jobs.front().first;
        int pos = jobs.front().second;
        jobs.pop();

        bool higher_priority_job = false;

        // Check if there's a job with higher priority
        for (int i = 0; i < jobs.size(); ++i) {
            if (jobs.front().first > priority) {
                jobs.push({priority, pos});
                higher_priority_job = true;
                break;
            } else {
                jobs.push(jobs.front());
                jobs.pop();
            }
        }

        if (!higher_priority_job) {
            minutes++;
            if (pos == position) {
                break;
            }
        }
    }

    return minutes;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> priorities(n);
        for (int i = 0; i < n; ++i) {
            cin >> priorities[i];
        }

        cout << timeToPrint(priorities, m) << endl;
    }

    return 0;
}
