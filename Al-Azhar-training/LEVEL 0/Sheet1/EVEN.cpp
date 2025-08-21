#include<iostream>
using namespace std;

int main(){


int X;
cin>>X;

int firstdigit= X/1000; // getting first DIGIT

if (firstdigit % 2 ==0 ){
  cout<<"EVEN";
}
else {
  cout<<"ODD";
}










  return 0 ;
}
