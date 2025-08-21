#include <iostream>
using namespace std;


void findMax(int nums[],int size){

int max = 0;

for (int i = 0 ; i < size;i++){

if (nums[i]>max){
  max = nums[i];
}

}

cout <<max;




}



int main(){


int N;
cin>>N;
int numbers[N];

for (int j = 0 ; j <N ; j++){
  cin>>numbers[j];
}


findMax(numbers,N);








  return 0;
}
