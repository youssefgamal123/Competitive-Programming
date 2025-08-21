#include <iostream>
using namespace  std;


int main() {


    int n , a;
    cin>> n>>a;

    int cities[n];
    int answer =0;


    for (int i = 1 ; i<=n;i++) {
        cin>>cities[i];
    }


    for (int  i =1 ;i<=n;i++) {

        if (cities[i] ==1 ) {
            int distance = i-a;
            int j = a - distance;
            if(j < 1 || j > n || cities[i] == cities[j])
                ++answer;
        }



    }

    cout <<answer<<endl;










    return  0;
}