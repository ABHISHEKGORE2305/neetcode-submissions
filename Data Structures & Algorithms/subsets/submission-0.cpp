class Solution {
public:
    void helper(int i,vector<vector<int>> &res,vector<int>& nums,vector<int> &subset){
        if(i>=nums.size()){
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        helper(i+1,res,nums,subset);
        subset.pop_back();
        helper(i+1,res,nums,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(0,res,nums,subset);
        return res;
    

    }
};
