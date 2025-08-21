#include <iostream>
#include <string>
using namespace std;


int main (){


int t;
cin>>t;

while(t--){

string s;
cin>>s;
int a_counter=0;
int b_counter=0;

for(char c :s ){

if (c=='A'){
  a_counter++;
}
else if (c=='B'){
  b_counter++;
}

}


if(a_counter>b_counter){
  cout << 'A' << endl;
      } else {
          cout << 'B' << endl;
      }

}
















  return 0;
}
