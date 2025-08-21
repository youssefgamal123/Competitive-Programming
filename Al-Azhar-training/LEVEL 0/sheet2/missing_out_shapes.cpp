/// alwyas think of it as rows and columns


#include <iostream>
using namespace std;


int main(){


// lets make a square

int N;
cin>>N;

// start with rows first and then see what do you wanna do abt it

/*
for (int row_counter=1 ; row_counter<=N;row_counter++) {

  for (int i = 1 ; i<N;i++){
    cout<<"* ";
  }
  cout <<endl;

}
*/

// increasing triangle


for (int row_counter=1 ; row_counter<=N;row_counter++) {

for (int i = 1 ; i<=row_counter;i++){
    cout<<"* ";
}
  cout <<endl;


}









  return 0;
}
