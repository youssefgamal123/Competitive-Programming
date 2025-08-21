#include <iostream>

using namespace std;

int min_number_index;
int max_number_index;

int get_min(int n, int numbers[]) {
    int min = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            min_number_index = i;
        }
    }

    return min;
}

int get_max(int n, int numbers[]) {
    int max = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            max_number_index = i;
        }
    }

    return max;
}

int main() {
    int n; // size of array
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // finding min and max numbers in array
    int min_number = get_min(n, numbers);
    int max_number = get_max(n, numbers);


    // Swap the minimum and maximum numbers in the array
    int temp = numbers[min_number_index];
    numbers[min_number_index] = numbers[max_number_index];
    numbers[max_number_index] = temp;



    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";

    return 0;
}
