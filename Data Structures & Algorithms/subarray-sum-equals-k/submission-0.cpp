class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int res=0;
        int currsum=0;

        mp[0]=1;
        for(int num:nums){
            currsum+=num;
            res+=mp[currsum-k];
            mp[currsum]++;
        }
        return res;
    }
};