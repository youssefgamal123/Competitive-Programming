class Solution {
public:

    vector<int> output;
    vector<vector<int>> ans;

    void solve (int index,int n, vector <int>nums  , vector<bool>& visited ){

        if (output.size() == n){
            ans.push_back(output);
            return;
        }

        if (index == n){
            return;
        }

        for (int i = 0 ; i< n ; ++i){

            if (visited[i]) continue;
            visited[i] =  true;
            output.push_back(nums[i]); // do
            solve (index+1,n,nums,visited); // recurnce
            output.pop_back();   // undo
            visited[i] = false;



        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector <bool>vistied(n);
        solve(0,n,nums,vistied);
        return ans;

    }
};