class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        if (s.size()%2==1) return false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{' || stack.empty()){
                stack.push(s[i]);
            }else{
                if(s[i]=='}' && stack.top()=='{'){
                    stack.pop();
                    continue;
                }
                else if(s[i]==')' && stack.top()=='('){
                    stack.pop();
                    continue;
                }
                else if(s[i]==']' && stack.top()=='['){
                    stack.pop();
                    continue;
                }else{
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
