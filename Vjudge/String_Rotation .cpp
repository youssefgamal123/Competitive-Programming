#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    string doubled = S + S;

    if (doubled.find(T) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
