#include <iostream>
#include <String>
#include <vector>

#include<unordered_map>
using namespace std;


std::pmr::string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string,int> freqmap;


        for (const string& s : arr){
            freqmap[s]++;
        }



        for  (const string str : freqmap) {

            if (freqmap[str] == 1) {
                k--;
                if (k==0) {
                    return str;
                }
            }



        }



    return "";

        }



    }


int main () {



    vector<string> arr = {"d","b","c","b","c","a"};
    int  k = 2;

    cout<< kthDistinct(arr,k);




    }
