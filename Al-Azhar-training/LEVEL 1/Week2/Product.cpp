#include <iostream>
using namespace std;


int main(){
int L,R,M;

cin>> L>>R>>M;

long long  ans=1;



for (int i = L;i<=R ; i++){

ans = (ans*i) %M;  // 1*L ,


}


cout<<ans;














}
