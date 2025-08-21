#include <iostream>
using namespace std;


int main(){


int n;
cin>>n;
int nums[n];

for (int i = 0 ;i<n;i++){
  cin>>nums[i]; // o(1)
}



for (int i = 0;i<n;i++){

  if (nums[i]<=10){
    cout <<"A["<<i<<"]"<<" "<<"= "<<nums[i]<<endl;
  }




}






  return 0;
}
