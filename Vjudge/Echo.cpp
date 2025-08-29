#include <iostream>

using namespace std;

int main () {

    string s;
    int N;

    string res = "";

    cin>>N>>s;

    for (char c : s) {
    res.push_back(c);
    res.push_back(c);
    }

    cout <<res<<endl;










    return 0;
}