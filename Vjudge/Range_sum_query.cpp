#include <iostream>
#include <vector>

using namespace std;


int main () {

    int n,q;
    cin>>n>>q;

    vector <long long> prefSum(n+1,0);


    prefSum[0]=0;

    vector <long long>nums(n);

    for (int i = 0 ; i <n;i++) {
        cin>>nums[i];
    }

    for (int i = 1 ; i <=n;i++) {
        prefSum[i] = nums[i-1] + prefSum[i-1];
    }


    int l , r;
    while (q--) {
      cin>>l >>r;

        cout << prefSum[r] - prefSum[l-1]<<endl;




    }













    return 0;



}