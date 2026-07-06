class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j=nums.size();
        vector<int> ans(2*j);
        for (int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[j]=nums[i];
            j++;
        }
        return ans;
    }
};