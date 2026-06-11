class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> um;
        for(string s: strs){
            string sorted_s =s;
            sort(sorted_s.begin(),sorted_s.end());
            um[sorted_s].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it:um){
            res.push_back(it.second);

        }
        return res;
        

            
        
    }
};
