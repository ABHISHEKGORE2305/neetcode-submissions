class Solution {
public:
    vector<string> chartostr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void backtrack(vector<string> &ans,string &currstr,string& digits,int i){
        if(currstr.size()==digits.size()){
            ans.push_back(currstr);
            return;
        }

        string character=chartostr[digits[i]-'0'];

        for(char c: character){
            currstr.push_back(c);
            backtrack(ans,currstr,digits,i+1);
            currstr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
         if(digits.size()==0) return {};
         vector<string> ans;
         string currstr;
         

         backtrack(ans,currstr,digits,0);
         return ans;
    }
};
