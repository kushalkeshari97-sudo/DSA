class Solution {
public:
    string build(string st){
        string ans;
        for(char ch :st){
            if(ch!='#'){
                ans.push_back(ch);
            }
            else{
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
        }
        return ans;

    }
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};