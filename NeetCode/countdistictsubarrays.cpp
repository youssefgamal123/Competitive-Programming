    #include <iostream>
    #include <unordered_set>
    #include <vector>
    using namespace std;



        long long countDistinctSubarrays(vector<int>& nums) {

           unordered_set<long long> window;
            long long count =0;
            long long left = 0;

            for (long long right = 0 ; right< nums.size();right++) {


                while (window.find(nums[right]) != window.end()  ) {

                    window.erase(nums[left]);
                    left++;



                }
                window.insert(nums[right]);

                count += (right - left + 1);



            }



            return count;

        }






    int main () {
        vector<int> elements = {1, 2, 1};
          long long ans =   countDistinctSubarrays(elements);

            cout<<ans;



        }