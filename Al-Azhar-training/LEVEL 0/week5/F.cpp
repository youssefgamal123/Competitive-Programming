#include <iostream>
using namespace std;
int main(){


string s;
int t;

cin>>t;
cin.ignore();

while(t--){


getline(cin,s);

if (s.length()<10){
  cout<<s<<endl;
}
else {
  cout<<s[0]<< s.length()-2<<s.back()<<endl;
}





}














  return 0;
}
