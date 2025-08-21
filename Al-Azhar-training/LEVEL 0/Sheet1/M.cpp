#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else if (isupper(X)) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    } else if (islower(X)) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    return 0;
}
