#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main () {


    int n,m,k;
    cin>>n>>m>>k;

    vector<int>desired_size(n);
    for (int  i = 0 ; i <n;i++) {
        cin >> desired_size[i];
    }

    sort (desired_size.begin(),desired_size.end());

    multiset<int>ms;
    int x;

    for (int i = 0 ; i<m;i++) {
        cin>>x;
        ms.insert(x);
    }

    int ans = 0;
   for (int  i = 0 ; i<n;i++) {

       int l = desired_size[i]-k; int r = desired_size[i]+k;
       auto it = ms.lower_bound(l);

       if (it != ms.end() && *it <=r ) {
           ans++;
           ms.erase(it);
       }

   }

    cout <<ans<<endl;












}
