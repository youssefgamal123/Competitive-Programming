#include <iostream>
#include <vector>
using namespace std;



int n;
vector<int> heights;
vector<int> memo;
int solve(int index) {



    if (index == n-1 ) {
        return 0;

    }


    if (memo[index]!=-1) {
        return memo[index];
    }


    int opt1 = 1e9;

    if (index+2 <  n) {
         opt1 = solve(index+2) + abs (heights[index] - heights[index+2]) ;

    }

    int opt2 = solve(index+1) + abs (heights[index] - heights[index+1]) ;



    return memo[index] =  min (opt1,opt2);


}




int main () {

    cin>>n;
    heights.resize(n);


    for (int i = 0 ; i < n ; i++) {
        cin>>heights[i];
    }

    memo.resize(n,-1);

  cout <<  solve (0);



}