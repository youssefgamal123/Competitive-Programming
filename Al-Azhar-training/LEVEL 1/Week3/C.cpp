#include <iostream>
#include <stack>
using namespace std;

bool isprpoerlyNested(const string& s){

stack <char> st;

// ( __> push into stack , ) > pop from stack, ( ( ( > not empty  --> No


    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty()) {
                return false;     // boundry check for viaolation ))))
            }
            st.pop();
        }
    }

    return st.empty();

}




int main(){



string s;
cin>>s;

if (isprpoerlyNested(s)){
  cout<<"yes";
}
else {
  cout<<"no";
}













  return 0;
}

/*
n the context of this problem, the stack being empty does indeed indicate that all opening parenthesis have been matched with closing parenthesis.
 So, when the stack becomes empty while processing the input string, it means that all parentheses have been properly paired, and the function can return true to indicate that the string is properly nested.

However, if the stack becomes empty while there are still closing parenthesis to process (i.e., a closing parenthesis is encountered without a matching opening parenthesis), it indicates an imbalance in the parenthesis, which violates the condition of proper nesting. In this case, the function can immediately return false to indicate that the string is not properly nested.

So, the line return false; inside the if (st.empty()) { ... } block is meant to handle the case where there are more closing parenthesis than opening parenthesis, resulting in an empty stack before all characters are processed. Returning false in this case helps to efficiently identify improper nesting without needing to continue processing the remaining characters.

*/
