#include <iostream>
#include <stack>
using namespace  std;



int main () {




    string str;
    cin >> str;

    stack <char> brackets;
    int res = 0;
    int open = 0;


    for (char c : str) {

        if ( c == '(' ) {
            open++;
        }
        else if (  c ==')'  ) {

            if (open>0) {
                res+=2;
                open--;
            }

        }



    }

    cout << res << endl;








}