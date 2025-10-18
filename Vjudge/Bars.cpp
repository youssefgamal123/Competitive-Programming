#include <iostream>
#include <vector>


using namespace std;

int arr_len;
int target;
int sum = 0;
vector <int> nums;
bool solve(int index , int sum) {

    // state = index
    // transition -> take or leave sum [index]
    // base case when sum reached  > target or when you reach end of array

    if (sum == target) {
        return true;
    }

    if (sum >target  || index ==  arr_len) {
        return false; // base case
    }



   return  solve (index+1,sum+nums[index])  || solve (index+1,sum); // leave  , take






}




int main () {


    int t ;
    cin>>t;
    while (t--) {
        cin>>target;
        cin>>arr_len;
        nums=vector<int>(arr_len);
        for (int  i = 0 ; i< arr_len ; i++){
            cin>>nums[i];
    }
        bool ans =  solve(0,0);
        cout << (ans ? "YES" : "NO") << endl;
    }











}