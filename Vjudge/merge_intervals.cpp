#include <iostream>
#include <algorithm>
using namespace std;


int main () {

    int n;
    cin>>n;
    pair <int,int>intervals[n];

    for (int i = 0 ; i< n;i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }


    sort (intervals,intervals+n);
    int left = intervals[0].first;
    int right = intervals[0].second;

 //     1  6  . 2 3 -> 1 , 6


    for (int i = 1 ; i<n ;i++) {

        if (intervals[i].first <=right) {

            right = max(right , intervals[i].second);

        }

        else {
            cout << left <<" "<< right <<endl;

            left = intervals[i].first;
            right = intervals[i].second;

        }


    }








    cout << left <<" "<< right <<endl;





    return 0;
}