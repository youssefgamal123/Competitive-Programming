#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n, m, a, b, y, ans;
    bool check = false;
    cin >> n >> m;
    y = m;
    ans = 0;
    while(n--)
    {
        cin >> a >> b;
        if(a == 0 && !check) check = true;
        if(a <= y && ans != m && b >= ans && check) ans = b, y = b;
    }
    if(ans == m) printf("YES\n");
    else printf("NO\n");

    return 0;
}
