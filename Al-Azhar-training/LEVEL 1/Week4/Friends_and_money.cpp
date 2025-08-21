#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int trails, queries;
    cin >> trails >> queries;

    map<string, int> friend_money;

    string name; // key
    int value; // value

    // Read the data for each friend
    while (trails--) {
        cin >> name >> value;
        friend_money[name] = value;
    }





while (queries--){

int op;
string friend_name;
int inc;

if (op ==1 ){
cin>>friend_name;
cin>>inc;
friend_money[friend_name]+=inc;


}


if (op==2){
  cin>>friend_name;
  cout<<friend_money[friend_name];
}

}





    return 0;
}
