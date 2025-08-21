// basic code for binary searched
#include <iostream>
using namespace std;


int main(){


int item;
cin>>item;


// pre intalized array ,cuz i don't have time for bullshit

int n = 8;

int numbers[n] = {1,2,3,4,5,6,7,8};


int left=0,right =n-1;



while(left<=right){
  int mid = (left + right) / 2;


if (numbers[mid] == item){
  cout<<"item found"<<endl;
  return 0;

}
else if (numbers[mid]<item){
  left = mid+1; // searching in bigger numbers range
}
else if (numbers[mid]>item){
  right = mid-1;
}

}
cout<<"Element not found";












  return 0;
}
