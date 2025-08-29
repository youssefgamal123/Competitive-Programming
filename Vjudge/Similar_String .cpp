#include <iostream>
using namespace std;

bool similarChar(char a, char b) {
    if (a == b) return true;
    if ((a == '1' && b == 'l') || (a == 'l' && b == '1')) return true;
    if ((a == '0' && b == 'o') || (a == 'o' && b == '0')) return true;
    return false;
}

int main() {
    int N;
    string S, T;
    cin >> N >> S >> T;

    for (int i = 0; i < N; i++) {
        if (!similarChar(S[i], T[i])) {
            cout << "No"<<endl;
            return 0;

        }

    }

    cout << "Yes"<<endl;

}
