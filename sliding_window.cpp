
/*
 In sliding window always start by lopping to get  K window size , to get the base window
 and then start removing and adding to the window with given constraints

so in all sliding window problems the window is either of length K or it's a dynamic window with no fixed size

for the fixed size length problems you itreate to K to get the initial window and at then the right_ptr of the window
will be pointing to K and from then you iterate through the rest of the array as right_ptr < arr.size()
and upon each iteration u check if the selected item meets ur requirements or not , in both cases
ur left most pointer shall be incremented so that u start a new window and the right pointer is increameneted
don't forget to maximize or minmimize whatever values u are looking for




however in the dynamic window appraoch you start the left and right pointers at the zero position
if it meets ur condition u increament the right pointer and so on untill you encounter a condtion where
 u need to start a new window ... and keep track of the required min or max value depeneding on the problem definition
 in a variable where u will max or min it
 in starting a new window u increament the left outer most pointer and carry on with the problem

 [[1,[2,3],4],5,6]  at k =3 1,2,3 is  a window and 2,3,4 is a window ... notice we increamented the left pointer
 to slide the window and open another

 also notice that when u increament the left pointer u remove it's value from the current window
 which means that if this element meets a certain condition in a sum or an arthimatic condition you are carrying
 then u have to take care of subtracting it's value from the window or the variable u were keeping track of
as it's out of the window now.

'

*/
















#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int>& arr, int k){
    int n = arr.size();

    // n must be greater
    if (n <= k) {
        cout << "Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // arr[i] acts as a righ  pointer and arr[i-k] gives the left outer pointer where it's value shall be subtracted from the current sum as this element is not in our tracked window so keeping it will result in  a bigger sum , so we need to subtract it's value .. subtracting it's value literally means removing it from our window .. but we don't just remove or skip the element hypothetically only .. but we must deduce any value it affected .. in our case it's the sum .. as this element is outside the window so counting it's sum is meaniningless as this element is not in the current window.
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main(){
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;
    cout << maxSum(arr, k);
    return 0;
}