class Solution {
public:
    bool dfs(vector<int> &nums,int sum,int index,vector<int> &subset,int k){
        if(index==nums.size()){
            for(int i=0;i<subset.size()-1;i++){
                if(subset[i]!=subset[i+1]) return false;
            }
            return true;
        }

        for(int j=0;j<k;j++){
            if(nums[index]+ subset[j]<=sum){
                subset[j]+=nums[index];
                if(dfs(nums,sum,index+1,subset,k)) return true;
                subset[j]-=nums[index];

            }
                       
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        int total=accumulate(nums.begin(),nums.end(),0);

        if(total%k!=0) return false;

        int sum=total/k;
        vector<int> subset(k,0);

        for(int i=0;i<nums.size();i++){
            if(nums[i]>sum) return false;
        }
        return dfs(nums,sum,0,subset,k);

    }
};