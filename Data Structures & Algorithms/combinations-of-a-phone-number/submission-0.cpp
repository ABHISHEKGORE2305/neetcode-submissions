class Solution {
public:
    vector<string> chartostr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void backtrack(vector<string> &ans,string currstr,string& digits,int i){
        if(currstr.size()==digits.size()){
            ans.push_back(currstr);
            return;
        }

        string character=chartostr[digits[i]-'0'];

        for(char c: character){
            backtrack(ans,currstr+c,digits,i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
         if(digits.size()==0) return {};
         vector<string> ans;
         

         backtrack(ans,"",digits,0);
         return ans;
    }
};
