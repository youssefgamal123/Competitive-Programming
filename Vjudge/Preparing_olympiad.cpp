#include <iostream>
#include <vector>
using namespace std;



void solve(int index, int lastTaken, int count) {

    if (index == n) {
        return;
    }

    int curr = arr[index];


    solve(index + 1, lastTaken, count);



    if (lastTaken == -1 || abs(curr - lastTaken) == x) {

        solve(index + 1, curr, count + 1);
    }
}
