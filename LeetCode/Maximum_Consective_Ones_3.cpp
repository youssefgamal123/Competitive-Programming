class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left_ptr = 0;
        int right_ptr = 0;
        int consectiveOnes=0;
        int maxOnes=0;


        while(right_ptr < nums.size())

            if (nums[right_ptr]   == 1 ){
                right_ptr+=1;
                consectiveOnes++;
            }

            else if (nums[right_ptr] == 0   && k>0  ){
                k--;
                right_ptr+=1;
                consectiveOnes++;
            }

            else {
                maxOnes = max(consectiveOnes,maxOnes);
                if (nums[left_ptr] == 0) {
                    k++;
                }
                consectiveOnes--;
                left_ptr++;
            }





        maxOnes = max(consectiveOnes,maxOnes);






        return maxOnes;





    }
};