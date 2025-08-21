#include <iostream>

using namespace std;


int findMin(int arr[], int size) {
    int min_value = arr[0]; // Assume the first element is the minimum

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i]; // Update min_value if a smaller element is found
        }
    }

    return min_value;
}


int findMax(int arr[], int size) {
    int maxVal = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update maxVal if we find a larger element
        }
    }

    return maxVal;
}



int main(){


int N ; // size of array
cin>>N;
int numbers[N];
int min,max; // to store the max , min values of array
int target=0;  // target we will store the summation in it
int counted_pairs=0;


for (int i =0 ; i<N;i++){

cin>>numbers[i];

}


min = findMin(numbers,N);
max = findMax(numbers,N);
target = min+max;



// finding the counted_pairs

for(int i = 0 ;i<N;i++){
  for(int j = i+1 ;j<N;j++){
    if(numbers[i]+numbers[j]==target ){
      counted_pairs++;
    }
  }
}


cout<<counted_pairs;


  return 0 ;
}
