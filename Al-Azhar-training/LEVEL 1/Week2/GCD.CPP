#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    // Calculate the GCD using the __gcd function
    long long gcd = __gcd(a, b);

    // Calculate the LCM using the formula LCM(A, B) = (A * B) / GCD(A, B)
    long long lcm = (a / gcd) * b;

    // Print the GCD and LCM separated by a space
    cout << gcd << " " << lcm;

    return 0;
}
