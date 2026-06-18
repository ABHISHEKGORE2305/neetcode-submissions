class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto i:strs){
            s=s+i+"/#/";
        }
        return s;

    }

    vector<string> decode(string s) {
        string temp;
        vector<string> res;
        for(int i=0;i<s.size();i++){
            if(s[i]=='/' && s[i+1]=='#' && s[i+2]=='/'){
                res.push_back(temp);
                temp="";
                i=i+2;
            }else{
                temp=temp+s[i];
                
            }
        }

        return res;

    }
};
