#include <iostream>
#include <vector>
#include <algorithm>

using namespace  std;


int cnt4 = 0;
int cnt7 =0;
long long gen = 0;
vector <long long >vecgen;
void solve (int index) {


    if (cnt4 == cnt7 && (cnt4 + cnt7) > 0) {
        vecgen.push_back(gen);
    }
    if (index ==11 )
        return;


    cnt4++;
    gen = gen*10 + 4;
    solve(index+1);

    cnt4--;
    gen/=10;

    cnt7++;
    gen = gen*10 +7;
    solve(index+1);
    cnt7--;
    gen /=10;




}





int main () {


    int n;
    cin>>n;
    solve(0);
    sort(vecgen.begin(),vecgen.end());
  cout << *lower_bound(vecgen.begin(),vecgen.end(),n);

}