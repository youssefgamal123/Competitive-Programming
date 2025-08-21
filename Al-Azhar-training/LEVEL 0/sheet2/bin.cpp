#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int T;


    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;

        
        cin >> N;

        // Convert N to its binary representation
        string binaryRepresentation = bitset<32>(N).to_string();

        // Count the number of ones in the binary representation
        int countOnes = 0;
        for (char bit : binaryRepresentation) {
            if (bit == '1') {
                countOnes++;
            }
        }

        // Print the equivalent decimal number with the specified number of ones
        int result = (1 << countOnes) - 1;
        cout << result << endl;


}
}
