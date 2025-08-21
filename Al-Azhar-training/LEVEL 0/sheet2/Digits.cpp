#include <iostream>
using namespace std;

int main() {
    int T;


    cin >> T;

    for (int t = 0; t < T; t++) {
        long long N;


        cin >> N;

        while (N > 0) {
            cout << N % 10 << " ";
            N /= 10;
        }

        cout << endl;
    }

    return 0;
}
