#include <iostream>
#include <cmath>
using namespace std;

int main(){


long long n;
long long sum = 0;
cin>>n;


/*
algorthim
hatmse le sqaure root el rakam  ex 12 , 3

hat add el i , num/i

12/1 = 12 ,12/2 = 6 , 12/3 = 4
result = 1+12+2+6+3+4 = 28

notice that en el arakam ely tal3tha hya el divsors bto3 el number



*/
 //
for (long long i = 1; i <= sqrt(n); i++){
  if (n%i ==0){
    sum+=i; // i is a divsor of n

    // boundry check for exceptions

    if (i != sqrt(n) ){
      sum+= n/i;
    }

  }


}

cout <<sum;














  return 0;
}
