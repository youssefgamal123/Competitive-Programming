#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{


    vector<int> arr= {1,2};


    for (int i = 0 ; i <arr.size();i++){

        int temp = arr[i];  //1
        arr[i] = arr[i+1];   // 1 = 2
        arr[i+1] = temp; // 2 , 1

    }


    for (int c : arr){
        cout <<c <<endl;
    }






    return 0;
}