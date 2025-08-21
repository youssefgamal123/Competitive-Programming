#include <iostream>
#include <stack>

using namespace std;

int main() {
    string wires;
    cin >> wires;

    stack<char> wireStack;

    for (char wire : wires) {
        if (!wireStack.empty() && wire == wireStack.top()) {
            wireStack.pop();
        } else {
            wireStack.push(wire);
        }
    }

    if (wireStack.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
