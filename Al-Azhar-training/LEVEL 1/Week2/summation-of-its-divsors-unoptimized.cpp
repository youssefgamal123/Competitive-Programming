#include <iostream>
#include <cmath>
using namespace std;


int main() {



    long long n;

    cin>> n;

    int *divisors = new int[1]; // Initial size of the array

    int size = 0; // Current size of the array

    for (long long i = 1; i <=n; i++) {
        if (n % i == 0) {
            // Increase the array size and add the divisor
            int *temp = new int[size + 1];
            for (int j = 0; j < size; j++) {
                temp[j] = divisors[j];
            }
            temp[size] = i;
            delete[] divisors;
            divisors = temp;

            size++;
        }
    }

    // sum the divisors

    long long sum  = 0;
    for (int i = 0; i < size; i++) {
          sum+=divisors[i];
    }


      cout<<sum;


    // Deallocate the memory
    delete[] divisors;

    return 0;

}
