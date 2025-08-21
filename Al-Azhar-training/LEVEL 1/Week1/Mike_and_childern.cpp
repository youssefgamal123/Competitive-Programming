// take the sweets array ,sum the numbers and make a frequcnecy array, max number in the freq array is the solution




#include<iostream>
#include <algorithm>
using namespace std;

int main(){


int n;
cin>>n;
int sweets[n];
int freq[200005]={0};



for (int i = 0;i<n;i++){
  cin>>sweets[i];
}

int mx=0;


for (int i = 0 ;i<n;i++){


  for (int j =i+1;j<n;j++){

    freq[sweets[i]+sweets[j]]++;
     mx=max(mx,freq[sweets[i]+sweets[j]]);
  }
}

// 1 2 3 4 5 6 7 




cout<<mx;


}
