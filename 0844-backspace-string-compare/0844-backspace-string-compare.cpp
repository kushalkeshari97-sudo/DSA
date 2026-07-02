class Solution {
public:
    string build(string st){
        stack<char> chr;
        for(char ch :st){
            if(ch!='#'){
                chr.push(ch);
            }
            else{
                if(!chr.empty()){
                    chr.pop();
                }
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
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};