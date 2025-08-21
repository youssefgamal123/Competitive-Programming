#include <iostream>
#include <string>

using namespace std;



string removeConsecutivePairs(const string& input ){

string result;

for (char c : input ){

// hhh

if (!result.empty() && result.back() ==c){
  result.pop_back();
}
else {
  result.push_back(c);
}


}


return result;






}





int main() {
    string input;
    cin >> input;

    string result = removeConsecutivePairs(input);
    cout << result << endl;

    return 0;
}
