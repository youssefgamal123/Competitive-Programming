#include <iostream>
#include <cmath>

using namespace std;

string isBulbOn(int n) {
    int root = sqrt(n);
    if (root * root == n) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cout << isBulbOn(n) << endl;
    }
    return 0;
}
