#include <iostream>

using namespace std;

int main(){



int n; // size of array
cin>>n;

int nums[n]; // creating array with size n


 // receiving the array


for (int i = 0 ; i<n;i++){
  cin>>nums[i];
}





for (int  i = 0 ; i<n;i++){


if (nums[i]>0 ){
  nums[i]=1; // replacing every positive number with one

}
else if (nums[i] <0 ){
  nums[i]=2; // replacing every negative number with 2
}


}

 // printing the modifiied array

 for (int i = 0 ; i <n;i++){
   cout<<nums[i]<<" ";
 }






// complexity n





  return 0;
}
