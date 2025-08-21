#include <iostream>
using namespace std;



int main(){

long long int size_of_array,n;

cin>>size_of_array>>n;

long long int numbers[size_of_array];


for (int i = 0;i<size_of_array;i++)
cin>>numbers[i];


// making frequncey array

long long int freq_arr[n+1]={0};

for (int i = 0;i<size_of_array;i++){

freq_arr[numbers[i]]++;

}



// printing values


for (int i = 1; i <= n; i++) {
       cout << freq_arr[i] << endl;
   }



  return 0;
}
