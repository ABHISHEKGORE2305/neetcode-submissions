class Solution {
public:
    void helper(vector<int> &nums,int r,int n,int k,vector<int>& subset,vector<vector<int>> &res){
        if(r>=n || subset.size()==k){
            if(subset.size()==k){
                res.push_back(subset);
            }
            return;
        }

        subset.push_back(nums[r]);
        helper(nums,r+1,n,k,subset,res);
        subset.pop_back();
        helper(nums,r+1,n,k,subset,res);
        return ;

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        vector<vector<int>> res;
        vector<int> subset;

        for(int i=0;i<n;i++){
            nums[i]=i+1; 
            cout<<nums[i]<<endl;
        }

        helper(nums,0,n,k,subset,res);
        return res;
    }
};