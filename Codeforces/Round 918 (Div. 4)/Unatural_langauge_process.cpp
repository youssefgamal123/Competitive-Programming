#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

bool isconst(char c){
  return c =='b' || c=='c' || c=='d';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n - 1; i++) {
            cout << s[i];
            if(i < n - 2 && isconst(s[i]) && isVowel(s[i + 1]) && isconst(s[i+2])) {
                cout << ".";
            }
        }
        cout << s[n - 1] << "\n";
    }
    return 0;
}
