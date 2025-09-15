#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    unordered_map<string, string> cur_to_orig;
    unordered_map<string, string> orig_to_cur;

    for (int i = 0; i < q; ++i) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        string original;
        if (cur_to_orig.count(old_handle)) {
            original = cur_to_orig[old_handle];
        } else {
            original = old_handle;
        }

        // Update mappings
        cur_to_orig.erase(old_handle);
        cur_to_orig[new_handle] = original;
        orig_to_cur[original] = new_handle;
    }

    cout << orig_to_cur.size() << "\n";
    for (const auto &p : orig_to_cur) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
