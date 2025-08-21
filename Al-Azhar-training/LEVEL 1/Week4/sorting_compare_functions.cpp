#include <iostream>
#include <algorithm>
using namespace std;



bool Descend(int x, int y){
  return x>y;
}





int main(){


int nums[] = {1,2,3,4,5,6,7,8};

sort(nums,nums+8,Descend); // nums+8 is a range , nums is the start of that range and +8 tells thee sort function that you will stop after 8 elements in the array


for (int i=0;i<8;i++)
cout<<nums[i] <<" " ;













return 0;
}
