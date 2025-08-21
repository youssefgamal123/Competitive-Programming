#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int normal_array[n];

    // Input the array
    for (int i = 0; i < n; i++)
        cin >> normal_array[i];

    int reversed_array[n];

    // Reverse the array
    int counter = 0;
    for (int j = n - 1; j >= 0; --j) {
        reversed_array[counter] = normal_array[j];
        counter++;
    }

    // Print the reversed array
    for (int i = 0; i < n; i++)
        cout << reversed_array[i] << " ";

    return 0;
}
