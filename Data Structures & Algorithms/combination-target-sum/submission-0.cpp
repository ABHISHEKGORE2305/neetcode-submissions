class Solution {
public:
    void helper(int i,vector<int> &subset,int &sum,vector<vector<int>> &res,int target,vector<int> nums){
        if(sum>=target || i>=nums.size()){
            if(sum==target) res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        sum+=nums[i];
        helper(i,subset,sum,res,target,nums);

        sum-=nums[i];
        subset.pop_back();
        
        helper(i+1,subset,sum,res,target,nums);

        return;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        int sum=0;
        

        helper(0,subset,sum,res,target,nums);
        return res;
    }
};
