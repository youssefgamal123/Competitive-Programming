#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    int left = 0, right = N-1;
    int minSum = arr[0] + arr[N-1];
    int count = 0;

    while(left < right) {
        int currentSum = arr[left] + arr[right];
        if(currentSum == minSum) {
            count++;
            left++;
            right--;
        } else if (currentSum < minSum) {
            left++;
        } else {
            right--;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
