#include <iostream>

using namespace  std;


int main () {


    /*

    any even can be represneted by n/2 primes all twos
    and any odd can be represented by (n-3)/2 all twos and +1 to all primes aka any odd can be represented by (n-3)/2 +1 primes



     */

    int n;
    cin>>n;


    if (n % 2 ==0) {
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++) cout << 2 << " ";
    }
    else {
         cout << (n - 3) / 2 + 1 << "\n";
        cout << 3 << " ";
        for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";


    }












    return  0 ;
}