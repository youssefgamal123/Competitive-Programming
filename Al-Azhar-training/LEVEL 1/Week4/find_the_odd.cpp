#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> elements;

    int num;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        // If the element is already in the set, remove it
        if (elements.find(num) != elements.end()) {
            elements.erase(num);
        } else { // Otherwise, add it to the set
            elements.insert(num);
        }
    }

    // The set now contains only the unpaired element
    cout << *elements.begin() << endl;

    return 0;
}
