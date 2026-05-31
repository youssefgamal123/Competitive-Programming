#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;



    int subarraySum(vector<int>& nums, int k) {


        int count = 0;

        for (int i  = 0 ; i<nums.size();i++){

            int currsum = 0;

            for (int j = 0 ; j<nums.size();j++){

                currsum+=nums[j];
                if (currsum == k){
                    count++;
                }


            }




        }


        return count;
    }


int main () {


    vector<int> test = {1,1,1};
    int k =2;

       int ans =  subarraySum(test,k);
        return ans;


    return 0;
}