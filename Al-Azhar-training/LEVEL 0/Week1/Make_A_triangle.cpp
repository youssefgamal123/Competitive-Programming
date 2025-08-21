#include <iostream>
using namespace std;



void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){


// to make a triangle the summation of the small sides should be bigger than the third side

int sides[3]; // to store the sides of the triangle
int minutes=0;
for(int i = 0 ;i<3;i++){
  cin>>sides[i];
}


// sort the array ascendigly

bubbleSort(sides,3);





while (minutes==0) {

if(sides[0]+sides[1] <=sides[2]){
cout<<sides[2]- (sides[0]+sides[1]) +1 ;
break;

}
else {
  cout<<0;
  break;
}


}





return 0;
}
