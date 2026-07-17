class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        set<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            while(r>l){
                if(nums[i]+nums[l]+nums[r]==0){
                    ans.insert({nums[i],nums[l],nums[r]});
                    l++;
                }else if(nums[i]+nums[l]+nums[r]>0){
                    r--;
                }else{
                    l++;
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};
