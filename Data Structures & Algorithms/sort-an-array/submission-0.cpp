class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0,nums.size()-1,nums);
        return nums;
    }

    void mergeSort(int l,int r,vector<int> &nums){
        //base
        if(l>=r){
            return;
        }
        int mid=(l+r)/2;


        mergeSort(l,mid,nums);
        mergeSort(mid+1,r,nums);
        merge(l,mid,r,nums);
    }
    void merge(int l,int m,int r,vector<int>& nums){
        vector<int> temp;
        int i=l; int j=m+1;
        while(i<=m && j<=r){
            if(nums[i]>nums[j]){
                temp.push_back(nums[j]);
                j++;
            }else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        while(i<=m) temp.push_back(nums[i++]);
        while(j<=r) temp.push_back(nums[j++]);

        for(int i=l;i<=r;i++){
            nums[i]=temp[i-l];
        }
    }

};