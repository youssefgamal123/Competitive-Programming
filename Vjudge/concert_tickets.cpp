#include <iostream>
#include <set>
using namespace std;

int main () {


    int n ,q;
    cin >> n>>q;
    multiset<int>ms;

    while (n--) {
        int x;
        cin>>x;
        ms.insert(x);
    }

    while (q--) {

        int x; cin>>x;

        auto it = ms.upper_bound(x);

        if (it !=ms.begin()) {
            --it;
            cout <<*it<<endl;
            ms.erase(it);
        }
        else {
            cout <<"-1"<<endl;
        }



    }














    return 0;





}