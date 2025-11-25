#include <iostream>
#include <vector>
using namespace std;



int min =2e9 , cnt = 0;
string s;
void solve (int left,int right,char ch ) {


    if (left == right) {
        mn = min(mn,cnt+ (s[left] != ch)  );
        return;
    }

    int mid = (left+right)/2;

        for (int i = mid+1; i<right; i++) {
            if (s[i] != ch)
                cnt++;
        }


    solve (left,mid,ch+1);
    for (int i = mid+1; i<right; i++) {
        if (s[i] != ch)
            cnt--;
    }


    for (int i = left; i<mid; i++) {
        if (s[i] != ch)
            cnt++;
    }


    solve (mid+1,right,ch+1);
    for (int i = left; i<mid; i++) {
        if (s[i] != ch)
            cnt--;
    }

}