#include <bits/stdc++.h>
using namespace std;

int main () {


    int n ,w;
    cin >> n>>w;

    vector <int>nums (n);

    for (int i = 0 ; i<n;i++) {
        cin>>nums[i];
    }

    vector<long long>prefixSum(n+1,0);

    for (int i =1 ; i<=n;i++) {

        prefixSum[i]= prefixSum[i-1] +  nums[i-1];

    }

    long long minSum = LLONG_MAX;
    int Index = 0;

    for (int i =0 ; i+w <=n; i++) {

      int windowSum = prefixSum[i+w] - prefixSum[i];
      if (windowSum<minSum) {
          minSum = windowSum;
          Index = i ;
      }

    }


    cout <<Index+1<<endl;










}