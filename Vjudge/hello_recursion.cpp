#include <iostream>
#include <vector>
using namespace std;

int sum = 0;
int caseNum = 1;

int calcSum(int index, vector<int>& nums) {
    if (index < 0) {
        cout << "Case " << caseNum++ << ": " << sum << endl;
        return 0; // base case
    }

    sum += nums[index];
    return calcSum(index - 1, nums); // transition
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        sum = 0;
        calcSum(n - 1, nums);
    }

    return 0;
}
