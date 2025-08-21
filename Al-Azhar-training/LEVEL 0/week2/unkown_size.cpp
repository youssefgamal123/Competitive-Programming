#include <iostream>
using namespace std;


int main(){


int N;
int counter = 0;
cin>>N;


for (int i = 1 ; i <= N;i++){

if(N%i == 0 ){
  counter++;

}

}


cout<<counter<<endl;

for (int i = 1 ; i <= N;i++){

if(N%i == 0 ){
cout<<i<<" ";

}

}










}
