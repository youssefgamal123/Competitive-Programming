#include <iostream>
using namespace std;


bool ispalindrome(int n,int numbers[]){

int left = 0;
int right = n-1;

//5
//0 1 2 3 4
//4 3 2 1  0

while(left<right){

// check first on the first and last element ,if they are not equal from the begining then it's not palindrome

if (numbers[left]!= numbers[right]){
  return false;
}

left++;
right--;


}


// if loop exists without returing false, then it returs true as array is palindrome
return true;



}


int main(){


int n;
cin>>n;

int numbers[n];

for (int i = 0;i<n;i++){
  cin>>numbers[i];
}

// check if array is palindrome , by itreating through last element and first element,o(n2)


if(ispalindrome(n,numbers))
cout<<"YES";
else
cout <<"NO";





  return 0;
}
