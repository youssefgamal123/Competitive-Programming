#include <iostream>
#include <vector>
using namespace std;

bool check(int x, vector<pair<int,int>>& pairs) {
    // find the first pair not covered by x
    for (auto [a, b] : pairs) {
        if (a != x && b != x) {
            // two candidates for y
            int y1 = a, y2 = b;

            // check with y1
            bool ok1 = true;
            for (auto [p, q] : pairs) {
                if (p != x && p != y1 && q != x && q != y1) {
                    ok1 = false;
                    break;
                }
            }
            if (ok1) return true;

            // check with y2
            bool ok2 = true;
            for (auto [p, q] : pairs) {
                if (p != x && p != y2 && q != x && q != y2) {
                    ok2 = false;
                    break;
                }
            }
            if (ok2) return true;

            return false; // neither y1 nor y2 worked
        }
    }
    return true; // all pairs already covered by x
}






int main () {


   int max_range , size;

    cin >> max_range >>size;

    vector <  pair <int,int>  >pairs(size);

    for (int i = 0 ; i<size;i++) {
        cin>>pairs[i].first >> pairs[i].second;
    }

    int a1 = pairs[0].first;
    int b1 = pairs[0].second;

    if (check(a1, pairs) || check(b1, pairs)) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }

















    return 0;
}