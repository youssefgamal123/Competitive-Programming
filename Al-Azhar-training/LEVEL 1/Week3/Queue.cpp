#include <iostream>
#include <queue>
using namespace std;

int main(){


// queue works in fifo style, first in first out
// insert at the end and pops at the front
// Diffrenece between stack and queue is that stack pushes and pops from the same place which is the rear and it has top , queue pushes from the back and pops from the front and it has font and push_back




queue <int>q;

////////////////////////////////
//  1 2 3
///////////////////////////////

q.push(1);
q.push(2);
q.push(3);


cout<<q.front()<<endl; // return the front which is 1
cout<<q.back()<<endl; // return the back which is 3
cout <<q.empty()<<endl; // returns 0 as queue is not empty
q.pop(); // pops 3 from the queue
cout<<q.size(); // returns the remaining element size in the queue 







  return 0;
}
