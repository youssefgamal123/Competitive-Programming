class Solution {
public:
    int maxArea(vector<int>& height) {

        int left =0;
        int right = height.size()-1;


        int Area = 0;
        int maxArea=0;

        while (left < right){
            Area =   (right-left) * min(height[left], height[right]  );        // width * height
            maxArea  = max (Area,maxArea);
            if (height[left] < height[right]   ){
                left+=1;
            }
            else {
                right-=1;
            }




        }

        return maxArea;

    }





};