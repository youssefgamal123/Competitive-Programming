#include <iostream>
using namespace std;



int remove_zero (int n ) {
  int ans = 0 ; int pow = 1;

  while (n>0) {


  int digit = n%10; // a5er reakam

  if(digit != 0 ){
    ans+=digit * pow; //   
     pow *=10;
  }

  n/=10;

  }
return ans;
}



int main(){


int a,b;
cin>>a>>b;
int c = a+b;


if (remove_zero(a) + remove_zero(b) == remove_zero(c) ){
  cout<<"YES";
}
else
cout <<"NO";








  return 0;
}
