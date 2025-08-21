#include <iostream>
#include <queue>
#include <vector>
using namespace std;


// priorty queue is just like a normal queue but the main diffrence here is that elemneents can be executed and manipluated in a specfic order based on their priorites

int main(){


  priority_queue <int> p1 ; // set to descending order


int numbers[] ={1,2,3,4,5};

for (int i =0;i<5;i++)
p1.push(numbers[i]);



priority_queue <int,vector <int>,greater <int> >p2;



for (int i =0;i<5;i++)
p2.push(numbers[i]);




while(!p1.empty()){
  cout<<p1.top()<<" ";
  p1.pop();
}


cout<<endl<<endl<<endl;

while(!p2.empty()){
  cout<<p2.top()<<" ";
  p2.pop();
}







  return 0;
}
