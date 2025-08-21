#include <iostream>
using namespace std;

int main() {
    int X;

    cin >> X;

    bool isPrime = true;

    if (X <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i*i <= X; i++) {
            if (X % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout  << "YES" ;
    } else {
        cout<< "NO";
    }

    return 0;
}
