#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Calculate the cost of option 1: buy n one-ride tickets
    int cost_option1 = n * a;

    // Calculate the cost of option 2: buy k m-ride tickets and the remaining rides as one-ride tickets
    int k = n / m;
    int cost_option2 = k * b + min((n % m) * a, b);

    // Output the minimum cost
    cout << min(cost_option1, cost_option2);

    return 0;
}
