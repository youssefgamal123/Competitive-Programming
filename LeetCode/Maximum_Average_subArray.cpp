class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {




        double Area= 0.0;
        double maxArea=0.0;
        double sum=0.00000;



        for (int i =0 ; i<k;i++){
            sum+=nums[i];
        }

        Area = (sum / k ) ;
        maxArea=Area;
        for (int i = k; i < nums.size();i++){

            sum += nums[i] - nums[i-k];
            Area = (sum/k);
            maxArea=  max (Area,maxArea);
        }



        return maxArea;


    }
};