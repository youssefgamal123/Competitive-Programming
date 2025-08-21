#include <algorithm>
#include<iostream>
#include<string>
using namespace std;


int main(){



string s,rev;

cin>>s;

rev = s;
reverse(rev.begin(), rev.end());

if (s==rev){

cout<<"YES";
}
else {
  cout<<"NO";
}










  return 0;
}
