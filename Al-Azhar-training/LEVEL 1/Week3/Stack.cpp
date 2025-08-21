#include <iostream>
#include <stack>
using namespace std;

int main(){

// check your files for the explaintion of the stack


stack <int> s;

s.push(1);
s.push (2);
s.push(3);
s.push (4);
s.pop(); // removes the element on top , so it will return 3
s.pop(); // return 2


// LIFO

cout <<s.top()<<endl;
cout<<s.size()<<endl; // returns the number of elements in the container
cout<<s.empty(); // returns 0 or 1 for true or false 










  return 0;
}
