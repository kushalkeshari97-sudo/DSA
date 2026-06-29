class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> s1;
        string ans="";
        for (int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(!s1.empty()){
                    ans=ans+s[i];
                }
                s1.push(s[i]);
            }
            else{
                s1.pop();
                if(!s1.empty()){
                    ans=ans+s[i];
                }
            }
        }
        return ans;

    }
};