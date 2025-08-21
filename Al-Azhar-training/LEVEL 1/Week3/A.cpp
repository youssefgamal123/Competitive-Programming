#include <iostream>
#include<stack>
using namespace std;


int main(){

int test_cases;
cin>>test_cases;

string query;
int number;

stack <int> s;

while(test_cases--){

cin>>query;
if(query == "push"){

cin>>number;
s.push(number);


} else if(query == "top"){
  cout<<s.top()<<endl;
}
else {
  s.pop();
}





}















  return 0;
}
