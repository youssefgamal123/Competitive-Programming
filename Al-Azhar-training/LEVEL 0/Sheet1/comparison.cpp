#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool isRight;

    switch (S) {
        case '<':
            isRight = (A < B);
            break;
        case '>':
            isRight = (A > B);
            break;
        case '=':
            isRight = (A == B);
            break;
    }

    if (isRight) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }

    return 0;
}
