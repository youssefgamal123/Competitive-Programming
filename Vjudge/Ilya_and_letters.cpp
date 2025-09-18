#include <iostream>
#include <vector>
using namespace std;


int main () {

    string s;
    cin>>s;

    int n = s.size();

    vector<int>freq(n,0);
    freq[0]=0;


    for (int i =1 ; i<n;i++) {

        freq[i] = freq[i-1];
        if (s[i] == s[i-1]) {
            freq[i]++;
        }

    }

    int q;
    cin>>q;

    while (q--) {


        int l ,r;
        cin>>l>>r;

        cout <<freq[r-1] - freq[l-1]<<endl;




    }



















    return 0;
}