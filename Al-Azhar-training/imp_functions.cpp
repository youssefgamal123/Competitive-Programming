/// imp built in functions


#include <iostream>
#include <algorithm>
using namespace std;

int main(){

// sort function takes array and array+size or range depending on your perfrence and range

int arr[]={2,5,32,1111,22222,444,555,666,6,6,6};

sort(arr,arr+9); // ascending order
/*
sort(arr,arr+9,greater<int>()); // descending order
*/
//reverse(arr,arr+9); // reverse


//int f = binary_search(arr,arr+9,2);
//cout<<f;

int x = count(arr,arr+11,6);
cout<<x;
/*
for(int i = 0 ; i<9;i++)
cout<<arr[i]<<" ";
*/











  return 0;
}
