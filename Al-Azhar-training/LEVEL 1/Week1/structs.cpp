#include <iostream>
using namespace std;



struct person{


string name;
int age;
string address;


};


void get_details(person& p);
void show_details(person& p );


int main(){




cout<<"Enter Person Details"<<endl;
person p1;
get_details(p1);
system("cls");
cout<<"Showing results"<<endl<<"--------------------------"<<endl<<endl<<endl;

show_details(p1);






}




void get_details(person& p){

cout<<"Enter Name"<<endl;
cin>>p.name;
cout<<"Enter Age"<<endl;
cin>>p.age;
cout<<"Enter Address"<<endl;
cin.ignore();
getline(cin,p.address);





}




void show_details(person& p ){

cout<<"Nmae is "<<p.name<<endl;
cout<<"Age is "<<p.age<<" Years"<<endl;
cout<<"Address is"<<p.address<<endl;






}
