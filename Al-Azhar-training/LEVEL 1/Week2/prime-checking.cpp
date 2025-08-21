#include <iostream>
#include <cmath>
using namespace std;

void isPrime(long long n) {
    bool flag = true;

    // Corner case
    if (n <= 1) {
        cout << "NO";
        return;
    }

    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    long long n;
    cin >> n;

    isPrime(n);

    return 0;
}


// there is a better solution instead of using a flag , you could just return and save memory space 
