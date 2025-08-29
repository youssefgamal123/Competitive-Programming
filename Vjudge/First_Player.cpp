#include <iostream>
#include <vector>
using namespace std;

int main () {


    int N;



    cin>>N;
    vector <string>names(N);
    vector<int>ages(N);



    for (int i = 0; i < N; i++) {

        cin >> names[i] >> ages[i];

    }


    int minIndex = 0;

    for (int i = 1 ; i < N;i++) {

        if (ages[i] < ages[minIndex]) {
            minIndex=i;
        }

    }


    for (int i = 0; i < N; i++) {
        cout << names[(minIndex + i) % N] << "\n";
    }



    return 0;









}