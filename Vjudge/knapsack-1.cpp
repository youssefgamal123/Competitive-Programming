#include <iostream>
#include <cstring>
#include <vector>
using namespace std;





vector<int>weights;
vector<long long > values;
int n;

long long memo[101][100001];
long long knapsack(int index, int remaining_weight) {

    // base case
    if (index == n) {
        return 0;
    }

        // dp check
    if (memo[index][remaining_weight] != -1) {
        return memo[index][remaining_weight];
    }

    long long pick = -1e9;

    if (remaining_weight - weights[index] >= 0) {
        pick = knapsack(index + 1, remaining_weight - weights[index]) + values[index]; // transition
    }

    long long leave = knapsack(index + 1, remaining_weight);    // transition

    return memo[index][remaining_weight] = max(pick, leave);
}




int main() {



    int max_Weight;

    cin>>n>>max_Weight;

    weights.resize(n);
    values.resize(n);

    for (int i = 0 ; i < n ; i++) {
        cin>>weights[i] >> values[i];
    }

    memset(memo, -1, sizeof(memo));


    cout << knapsack(0,max_Weight);


}