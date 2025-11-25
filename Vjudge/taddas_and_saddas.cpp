#include <algorithm>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector <long long>nums;
long long gen = 0;
void solve(int index,long long gen){

     if (gen > 0 ){
        nums.push_back(gen);
     }

    if (index ==11){
        return;
    }


    solve(index+1, gen*10+4);

    solve(index + 1,gen*10+7);

}

int main() {


    int n ;
    cin >>n;
    solve(0,0);
    sort(nums.begin(),nums.end());
    auto it = find(nums.begin(), nums.end(), n);

    if (it != nums.end()) {
        int index = it - nums.begin();
        cout  << index+1 << endl;
    }

}