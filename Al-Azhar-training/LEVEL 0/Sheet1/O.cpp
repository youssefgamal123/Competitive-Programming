#include <iostream>
using namespace std;

int main() {
    int A, B;
    char operation;
    cin >> A >> operation >> B;

    int result;

    switch (operation) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
    }

    cout << result << endl;

    return 0;
}
