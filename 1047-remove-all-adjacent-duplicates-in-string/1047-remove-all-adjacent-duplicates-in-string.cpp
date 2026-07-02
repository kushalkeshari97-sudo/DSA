class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> chr;
        for(char ch:s){
            if(!chr.empty() && ch==chr.top()){
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