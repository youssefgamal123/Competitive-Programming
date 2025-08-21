#include <iostream>
using namespace std;


int main(){


int coins[5];
for (int i = 0;i<5;i++){
cin>>coins[i];
}

int total_coins=0;

for (int i =0;i<5;i++){
  total_coins+=coins[i];
}



if (total_coins % 5 == 0 && total_coins != 0) {
       cout << total_coins / 5 ;
   } else {
       cout << -1 ;
   }










  return 0;
}
