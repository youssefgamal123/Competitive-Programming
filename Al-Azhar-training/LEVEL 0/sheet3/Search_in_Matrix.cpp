#include <iostream>
using namespace std;




int main(){


int row,col;
cin>>row>>col;

int matrix[row][col];

for (int i =0;i<row;i++){

for (int j =0;j<col;j++){

cin>>matrix[i][j];

}

}


int search;

cin>>search;

int flag = 0;


for (int i =0;i<row;i++){

for (int j =0;j<col;j++){

if(matrix[i][j] == search){
  flag=1;
  break;
}



}

}


if(flag == 1){
		cout<<"will not take number"<<endl;
	} else {
		cout<<"will take number"<<endl;
	}





  return 0;
}
