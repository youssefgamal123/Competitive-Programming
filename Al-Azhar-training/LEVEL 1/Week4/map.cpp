#include <iostream>
#include <map>
using namespace std;



int main(){


map <string,int> ageof;


ageof["Youssef"] =18;
ageof["Mahmod"] = 20;

ageof["Youssef"]++;
cout<<ageof["Youssef"];


// to print each key and value in map, we use an iterator

map<string,int>::iterator it;


for (it=ageof.begin(); it!=ageof.end(); it++ ){

pair <string,int> p = *it;

cout <<"the age of "<<p.first<<" is " <<p.second<<endl;

}










}
