class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 1. Handle empty edge case
        if (nums.empty()) return 0; 

        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = nums[i];
        }

        int curr_s = 1;
        int max_s = 1;

        for(auto p : mp){
            auto next_it = mp.upper_bound(p.first);
            
            // 2. Correct iterator check
            if (next_it != mp.end()) {
                // 3. Correct arrow operator usage
                if (p.first == (next_it->first) - 1) {
                    curr_s++;
                } else {
                    max_s = max(max_s, curr_s);
                    // 4. Reset to 1, not 0
                    curr_s = 1; 
                }
            } else {
                // 5. Catch the final sequence when we hit the end of the map
                max_s = max(max_s, curr_s);
            }
        }
        
        return max_s;
    }
};