#include <iostream>
#include <set>
using namespace std;


int main(){




set <int> numbers;

// let's make this set take numbers from an array
int values [5]= {1,1,2,3,4};

for (int i=0;i<5;i++)
numbers.insert(values[i]);



// let's print the values using itreator


set <int>::iterator it;


for (it=numbers.begin() ; it!=numbers.end();it++){
  cout<<*it<<" "; // notice that it didn't take 1 twice as 1 is duplicated value and sets doesn't take duplicated values
}



cout<<endl<<endl;


set <int>::reverse_iterator itt;


for (itt=numbers.rbegin() ; itt!=numbers.rend();itt++){
  cout<<*itt<<" ";
}

//////// eraaaaaaaaaaaaaase note 








  return 0;
}
