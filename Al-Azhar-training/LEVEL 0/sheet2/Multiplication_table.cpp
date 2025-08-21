#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N; // Input number N

    for (int i = 1; i <= 12; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
