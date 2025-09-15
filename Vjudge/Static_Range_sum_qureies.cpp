#include <iostream>
#include <vector>
using namespace std;


int main () {


    int n ,q;
    cin >> n>>q;

    vector <long long> pref(n+1,0);
    vector<long long> arr(n);

    for (int i = 0 ; i<n;i++) {
        cin>>arr[i];
    }


    pref[0]=0;

    for (int i =1 ; i<=n;i++) {
        pref[i] = arr[i-1]+pref[i-1];
    }


    int l, r;

    while (q--) {
        cin>>l>>r;
        cout << pref[r] -pref[l-1] <<endl;
    }












    return 0;
}