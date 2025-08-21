#include <iostream>
#include <string>

using namespace std;

char determineWinner(const string& SM, const string& SA, const string& SR) {
    int indexM = 0, indexA = 0, indexR = 0; // Index to keep track of the current card in each player's deck

    char currentPlayer = 'm'; // The game starts with Muhammad

    while (true) {
        if (currentPlayer == 'm') {
            if (indexM >= SM.size()) // If Muhammad's deck is empty, Muhammad wins
                return 'M';
            currentPlayer = SM[indexM++];
        } else if (currentPlayer == 'a') {
            if (indexA >= SA.size()) // If Ali's deck is empty, Ali wins
                return 'A';
            currentPlayer = SA[indexA++];
        } else { // currentPlayer == 'r'
            if (indexR >= SR.size()) // If Rady's deck is empty, Rady wins
                return 'R';
            currentPlayer = SR[indexR++];
        }
    }
}

int main() {
    string SM, SA, SR;
    cin >> SM >> SA >> SR;

    char winner = determineWinner(SM, SA, SR);
    cout << winner ;

    return 0;
}
