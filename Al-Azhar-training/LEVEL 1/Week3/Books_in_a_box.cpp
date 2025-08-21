#include <iostream>
#include <stack>
using namespace std;


int main(){


int moves,operation,book;
cin>>moves;
stack <int> box;

for (int i = 0;i<moves;i++){

cin>>operation;

if (operation==1){
  cin>>book;
  box.push(book);
}
else if (operation ==2){
  if(!box.empty()) {
      box.pop();
  }

}
else if (operation == 3) {
            if (!box.empty()) {
                cout << box.top() << endl;
            }


}

}



return 0;
}
