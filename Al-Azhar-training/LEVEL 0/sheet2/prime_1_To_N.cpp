#include <iostream>
using namespace std;

int main(){



int N;
cin>>N;

for (int i = 2;i<=N;i++){
int prim=0;

for(int j =2;j<i;j++){

if(i%j == 0 ){

  prim=1;
  break;

}

if (prim == 0 ){
  cout<<i<<" ";
}



}

}



  return 0;
}
