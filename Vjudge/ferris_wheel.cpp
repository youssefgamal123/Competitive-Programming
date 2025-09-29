#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {




    int n,x;
    cin>>n>>x;

    vector<int>nums(n);
    for (int i = 0; i<n;i++) {
        cin>>nums[i];
    }


   int gandola_count =0;

    sort(nums.begin(),nums.end());

    int l = 0 , r= n-1;

    while (l<=r) {

        if (nums[l]+nums[r]<=x) {
            l++;
            r--;
        }
        else {
            r--;
        }

        gandola_count++;


    }

cout <<gandola_count<<endl;



}