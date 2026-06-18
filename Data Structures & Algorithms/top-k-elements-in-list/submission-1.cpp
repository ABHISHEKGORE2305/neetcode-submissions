class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        vector<pair<int,int>> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }

        for(const auto& p :mp){
            ans.push_back({p.second,p.first});
        }
        sort(ans.rbegin(),ans.rend());

        vector<int> res ;
        for(int i=0;i<k;++i){
            res.push_back(ans[i].second);
        }
        
        return res;
    }
};
