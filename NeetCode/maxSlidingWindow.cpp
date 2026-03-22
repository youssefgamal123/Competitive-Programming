
#include <iostream>
#include <vector>
using namespace  std;

    vector<int> result;


    void getAndPushmax(vector<int>& window ){

        int max = window[0];

        for (int i = 1 ; i< window.size() ; i++){
            if (window[i]  > max ){
                max = window[i];
            }
        }

        result.push_back(max);

    }


    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> currentWindow;

        int left = 0;



        for (int right = 0 ; right < k ; right++){
            currentWindow.push_back(nums[right]);
        }

        getAndPushmax(currentWindow);


        for (int right = k ; right < nums.size() ; right++){

            currentWindow.erase(currentWindow.begin() + left);
            currentWindow.push_back(nums[right]);
            getAndPushmax(currentWindow);

        }


        return result;


    }




int main () {


        vector<int> nums = { 1,3,1,2,0,5};

      vector <int> res =   maxSlidingWindow(nums,3);
        for (int i : res) {
            cout <<i;
        }



    }
