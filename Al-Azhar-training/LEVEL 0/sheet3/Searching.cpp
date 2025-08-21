#include <iostream>
using namespace std;

int main(){


int size_of_array,wanted_num;

cin>>size_of_array;
int nums[size_of_array];

for (int i = 0 ; i<size_of_array ;i++){
  cin>>nums[i];
}


cin>>wanted_num;


// linear search

int index = -1;
for (int counter = 0 ; counter <size_of_array ; counter++){
// 2314
if (nums[counter] == wanted_num){
  index = counter;
  break;
}


}

cout <<index;
















  return 0;
}
