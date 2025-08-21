#include <iostream>
using namespace std;


int main(){


int size;
long long  sum =0;
cin>>size;

long int nums [size];


for (int c = 0 ; c<size ;c++){
  cin>>nums[c];
}


for (int i = 0 ; i<size; i++){
  sum+=nums[i];
}



cout<<abs(sum);








return 0;

}
