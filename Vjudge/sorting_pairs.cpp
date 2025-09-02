#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



bool comp(pair<string,int> &a , pair <string,int> &b  ) {


    if (a.second>b.second)
        return true;
    else if (a.second==b.second) {
        return a.first < b.first;
    }
    else {
        return false;
    }


}


int main () {


    int n;
    cin>>n;


    vector<pair<string,int>> persons(n);
    for (int i = 0; i < n; i++) {
        cin >> persons[i].first >> persons[i].second;
    }

    sort (persons.begin(),persons.end(),comp);


    for (int i = 0; i < n; i++) {
        cout << persons[i].first << " " << persons[i].second <<endl;
    }




    return 0;
}