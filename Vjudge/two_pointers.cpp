#include<iostream>
#include <vector>
using namespace std;


int main () {


    int n , target;
    cin >> n>>target;


    vector<int>nums(n);

    for (int i = 0 ; i < n;i++) {
        cin>>nums[i];
    }


    int long long l =0  , r=0,sum=0;

    long long  ans=LONG_LONG_MAX;

    while (l<n) {

        while (r<n &&sum<target) {
            sum+=nums[r];
            r++;
        }
       if (sum>=target)  ans  = min(ans,r-l);
        sum-=nums[l];
        l++;


    }

    cout <<ans<<endl;















    return 0;
}