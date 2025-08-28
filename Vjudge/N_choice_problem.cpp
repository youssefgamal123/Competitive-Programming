#include <iostream>
using namespace std;


int main () {

    int N,A,B,C;

    cin>>N>>A>>B;

    C = A+B;

   int res[N];

    for (int i = 0 ; i <N;i++) {
         cin >>  res[i];
    }

    for (int  i = 0 ; i<N;i++) {
        if (res[i]==C) {
            cout <<i+1;
        }
    }




}