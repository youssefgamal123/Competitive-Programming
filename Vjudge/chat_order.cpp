#include <iostream>
#include <map>

using namespace  std;


int main () {


    int n;
    cin>>n;

    string s[n];

    map <string,char> names;

    for (int i = 0 ; i < n;i++) {
        cin>>s[i];
        names.insert( {s[i],'f'} );
    }

    for (int i = n-1 ; i>=0 ; i--) {

        if (names[s[i]] == 'f' ) {
            cout <<s[i]<<endl;
            names[s[i]]= 't';
        }
    }


    return 0;








}