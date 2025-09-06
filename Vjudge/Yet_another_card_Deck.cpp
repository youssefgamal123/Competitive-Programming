#include <iostream>
#include <deque>
using namespace std;

void solve (int query , deque<int>&nums ) {

    int pos  = -1;

    for (int i =0 ; i < nums.size();i++) {

        if (nums[i] == query) {
            pos = i;
            break;
        }


    }

    cout <<pos+1<<" ";
    int card = nums[pos];
    nums.erase(nums.begin()+ pos);
    nums.push_front(card);




}




int main () {

    int n,t;
    cin>>n>>t;



    deque <int>nums(n);
    for (int i = 0 ; i<n;i++) {
        cin>>nums[i];
    }


    int query;

    while (t--) {

        cin >>query;
        solve(query,nums);





    }


















}