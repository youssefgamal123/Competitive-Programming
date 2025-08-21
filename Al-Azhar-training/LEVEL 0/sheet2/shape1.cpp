#include <iostream>
using namespace std;


int main(){


int N;
cin>>N;

// outer loop controls rows number
// inner loop controls astricsk numbers

for (int i = N ; i>=1 ;i--){
  for(int j = 0 ; j<i;j++){
    cout <<"*";
  }
  cout<<endl;

}









  return 0;
}
