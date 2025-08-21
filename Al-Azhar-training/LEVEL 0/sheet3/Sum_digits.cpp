

#include <iostream>
using namespace std;


void get_sum(int n){

int sum=0;

while(n!=0){

  sum += n%10;
  n=n/10;


}

cout<<sum;


}

int main(){

int s;
int n;
cin>>s;
cin>>n;

get_sum(n);





  return 0;
}
