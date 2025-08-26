#include <iostream>
#include <vector>
using namespace std;


int main () {


    vector <int> nums = {2,3,4,5};
    int n = nums.size();


    vector <int> suffix (n) ;
    suffix[n-1] = nums[n-1];  // last element

    // suffix = {1,1,1,5}
    for (int i = n-2; i >=0; i--) {

        suffix[i] = suffix[i+1] * nums[i];
    }






    for (int i =0 ; i < nums.size() ; i++) {
        cout << suffix[i] << endl;
    }








    return 0;
}