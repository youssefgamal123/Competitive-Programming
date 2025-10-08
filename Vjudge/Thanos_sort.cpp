#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& a, int l, int r) {
    for (int i = l; i < r; i++) {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

int thanosSort(const vector<int>& a, int l, int r) {
    if (isSorted(a, l, r))
        return r - l + 1;        // base case


    // transitions
    int mid = (l + r) / 2;
    int leftHalf = thanosSort(a, l, mid);
    int rightHalf = thanosSort(a, mid + 1, r);

    return max(leftHalf, rightHalf);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << thanosSort(a, 0, n - 1) << endl;
    return 0;
}
