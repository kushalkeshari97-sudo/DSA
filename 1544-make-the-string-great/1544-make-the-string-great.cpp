class Solution {
public:
    string makeGood(string s) {
        stack<char> chr;
        for(char ch:s){
            if(!chr.empty() && abs(ch-chr.top())==32){
                chr.pop();
            }
            else{
                chr.push(ch);
            }
        }
        string ans="";
        while(!chr.empty()){
            ans+=chr.top();
            chr.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};