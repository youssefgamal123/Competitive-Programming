#include <iostream>
#include <deque>
#include <stack>
using namespace std;

void reverseDeque(std::deque<int> &dq) {
    std::stack<int> s;

    // Dequeue elements from the deque and push them onto the stack
    while (!dq.empty()) {
        s.push(dq.front());
        dq.pop_front();
    }

    // Pop elements from the stack and enqueue them back into the deque
    while (!s.empty()) {
        dq.push_back(s.top());
        s.pop();
    }
}



int main(){


deque <int> list;

int size,no_of_operations;
int input_value;
int operation;
int place,value;

cin>>size>>no_of_operations;


while(size){

cin>>input_value;
list.push_back(input_value);
size--;


}

/*
  while (!list.empty()) {
  cout << list.front() << " ";
      list.pop();
  }
*/



while(no_of_operations){

cin>>operation;

if(operation ==1 ){
  reverseDeque(list);
} else if (operation == 2){

cin>>place;
cin>>value;

if(place ==1){
  list.push_front(value);
}
else {
  list.push_back(value);
}




}




no_of_operations--;

}



cout<<list.size()<<endl;
while (!list.empty()) {
cout << list.front() << " ";
    list.pop_front();
}





  return 0;
}
