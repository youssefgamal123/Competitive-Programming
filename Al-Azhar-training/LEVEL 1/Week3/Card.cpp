#include <iostream>
#include <queue>

using namespace std;

void simulate(int n) {
    queue<int> deck;
    for (int i = 1; i <= n; ++i) {
        deck.push(i); // Initialize the deck with cards numbered 1 to n
    }

    // Print the sequence of discarded cards
    while (deck.size() > 1) {
        cout << deck.front() << " "; // Output the top card
        deck.pop(); // Discard the top card
        int topCard = deck.front(); // Get the card that is now on the top
        deck.pop(); // Discard the second card
        deck.push(topCard); // Move the top card to the bottom
    }
    cout << endl;

    // Print the last remaining card
    cout << deck.front() << endl;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;
        simulate(n);
    }

    return 0;
}
